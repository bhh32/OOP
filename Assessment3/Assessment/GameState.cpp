#include "GameState.h"
#include "sfwdraw.h"
#include <Windows.h>

void GameState::CreateObjs()
{
	// Create the player
	player.ship = sfw::loadTextureMap("res/spaceship-png-icon-8.png");
	player.lives = 5;
	player.isDead = false;
	player.x = 400;
	player.y = 0;
	player.rotation = 0;
	player.speed = 300.f;
	player.fireDelay = .5f;
	player.firedShot = false;
	player.score = 0;
	player.upKey = 'W';
	player.downKey = 'S';
	player.rightKey = 'D';
	player.leftKey = 'A';
	player.shotKey = VK_SPACE;

	// Create the bullets
	for (int i = 0; i < 100; ++i)
	{
		bullets[i].lifeTime = -1;
	}

	// Enemy Timer Variables
	enemyTimer = 4;
	enemyDelay = 4;

	// Create the Enemies *Stage 1
	for (int i = 0; i < 100; ++i)
	{
		enemyS1[i].isAlive = false;
		enemyS1[i].enemyStage1 = sfw::loadTextureMap("res/enemyStage1.png");
	}

}

void GameState::BulletInit(Bullets &currentBullet)
{
	// Initiate a new enemy
	currentBullet.lifeTime = 10;
	currentBullet.x = player.x;
	currentBullet.y = player.y + 2;
	currentBullet.initShot = false;
	currentBullet.beenShot = true;
	currentBullet.speed = 4750 * sfw::getDeltaTime();
}

void GameState::EnemyInit(EnemyStage1 &currentEnemyS1)
{
	// Initiate and new enemy
	currentEnemyS1.isAlive = true;
	currentEnemyS1.opRange = rand() % 10;
	currentEnemyS1.x = rand() % 1240;
	currentEnemyS1.y = 800;
	currentEnemyS1.startX = currentEnemyS1.x;
	currentEnemyS1.velX = -1;
	currentEnemyS1.speedX = 20;
	currentEnemyS1.speedY = 4;
	currentEnemyS1.playDeath = false;
}

void GameState::Spawn()
{
	// Spawn Bullets
	if (player.firedShot)
	{
		// Cycle through the bullets to find a bullet that can be shot
		for (int i = 0; i < 100; ++i)
		{
			// If the bullets lifeTime < 0 it's ok to be shot
			if (bullets[i].lifeTime < 0)
			{
				BulletInit(bullets[i]);
				break;
			}
		}

		player.firedShot = false;
	}

	// Decrement enemy Spawn Timer
	enemyTimer -= sfw::getDeltaTime();

	if (enemyTimer < 0)
	{
		for (int i = 0; i < 100; ++i)
		{
			if (!enemyS1[i].isAlive)
			{
				EnemyInit(enemyS1[i]);

				enemyTimer = enemyDelay;

				enemyDelay *= 0.98f;

				break;
			}
		}
	}
}

void GameState::Collision()
{
	// Check for bullet / enemy (Stage 1) collision
  	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (bullets[j].lifeTime > 0 && enemyS1[i].isAlive)
			{
				if (EnemyBulletCollision(bullets[j], enemyS1[i]))
				{
					bullets[j].lifeTime = 0;
					enemyS1[i].isAlive = false;
					player.score++;
				}
			}
		}
	}


	// Check for player / enemy (Stage 1) collision
	for (int i = 0; i < 100; ++i)
	{
		if (enemyS1[i].isAlive)
		{
			if (PlayerEnemyCollision(enemyS1[i]))
			{
				enemyS1[i].isAlive = false;

				if (player.lives > 0)
				{
					player.lives--;
				}

				if (player.lives <= 0)
				{
					player.isDead = true;
					break;
				}
			}
		}
	}
}

void GameState::Update()
{
	// Update Player
	player.Update();
	
	// Update Active Bullets
	for (int i = 0; i < 100; ++i)
	{
		if(bullets[i].lifeTime >= 0)
			bullets[i].Update();
	}

	// Update Alive Enemies
	for (int i = 0; i < 100; ++i)
	{
		if (enemyS1[i].isAlive)
		{
			enemyS1[i].Update();
		}
	}

	// Check For Collision
	Collision();

	// Spawn New Bullets and Enemies
	Spawn();
}

void GameState::Draw()
{
	// Draw the player
	player.Draw();

	// Draw the active bullets
	for (int i = 0; i < 100; ++i)
	{
		if(bullets[i].lifeTime >= 0)
			bullets[i].Draw();
	}

	// Draw the alive enemies
	for (int i = 0; i < 100; ++i)
	{
		if (enemyS1[i].isAlive)
			enemyS1[i].Draw();
	}
}

// Tests for the player and enemy collision
bool GameState::PlayerEnemyCollision(EnemyStage1 &currentEnemyS1)
{
	float rad = (player.x + 2 - currentEnemyS1.x) * (player.x + 2 - currentEnemyS1.x) + (player.y - currentEnemyS1.y) * (player.y - currentEnemyS1.y);
	return rad < 800;
}

// Tests for bullet and enemy collision
bool GameState::EnemyBulletCollision(Bullets &currentBullet, EnemyStage1 &currentEnemyS1)
{
	float rad = (currentBullet.x - currentEnemyS1.x) * (currentBullet.x - currentEnemyS1.x) + (currentBullet.y - currentEnemyS1.y) * (currentBullet.y - currentEnemyS1.y);
	return rad < 80;
}
