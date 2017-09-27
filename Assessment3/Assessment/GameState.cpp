#include "GameState.h"
#include "sfwdraw.h"
#include <Windows.h>

void GameState::Init()
{
	// Create the players
	player.x = 400;
	player.y = 0;
	player.rotation = 0;
	player.speed = 100.f;
	player.firedShot = false;
	player.upKey = 'W';
	player.downKey = 'S';
	player.rightKey = 'D';
	player.leftKey = 'A';
	player.shotKey = 'F';

	// Create the bullets
	for (int i = 0; i < 100; ++i)
	{
		bullets[i].lifeTime = -1;
	}
}

void GameState::BulletInit(Bullets &currentBullet)
{
	currentBullet.lifeTime = 4;
	currentBullet.x = player.x;
	currentBullet.y = player.y + 2;
	currentBullet.initShot = false;
	currentBullet.beenShot = true;
	currentBullet.speed = 1000 * sfw::getDeltaTime();
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
}

void GameState::Update()
{
	player.Update();
	
	for (int i = 0; i < 100; ++i)
	{
		if(bullets[i].lifeTime >= 0)
			bullets[i].Update();
	}

	Spawn();
}

void GameState::Draw()
{
	player.Draw();

	for (int i = 0; i < 100; ++i)
	{
		if(bullets[i].lifeTime >= 0)
			bullets[i].Draw();
	}
}
