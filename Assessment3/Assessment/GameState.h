#pragma once

#include "Player.h"
#include "Bullets.h"
#include "Explosions.h" // Both Enemy header files are contained in this one
#include <string>

class GameState
{
public:
	// Flag for game to be over
	bool isGameOver = false;

	// Initiate the characters
	void CreateObjs();
	void Update();
	void Draw();

private:

	// Character Objects
	Player player;
	Bullets bullets[100];
	EnemyStage1 enemyS1[100];
	EnemyStage2 enemyS2[100];
	Explosions exp;

	// Timer Variables
	float enemyTimer;
	float enemyDelay;

	// Text & Img Variables
	unsigned int stringFontMap;
	
	std::string pScoreText;
	std::string pScoreString;
	std::string pLivesText;
	std::string pLivesString;
	std::string gameOverText;

	// Sound Variables
	unsigned int gameOverSound;
	unsigned int backgroundMusic;

	// Collision Functions
	void Collision();
	
	bool PlayerEnemyStage1Collision(EnemyStage1 &currentEnemyS1);
	bool PlayerEnemyStage2Collision(EnemyStage2 &currentEnemyS2);
	bool EnemyStage1BulletCollision(Bullets &currentBullet, EnemyStage1 &currentEnemyS1);
	bool EnemyStage2BulletCollision(Bullets &currentBullet, EnemyStage2 &currentEnemyS2);


	// Initialization Functions
	void Spawn();
	void BulletInit(Bullets &currentBullet);
	void EnemyInit(EnemyStage1 &currentEnemyS1, EnemyStage2 &currentEnemyS2);
	
	
};