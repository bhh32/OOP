#pragma once

#include "Player.h"
#include "Bullets.h"
#include "EnemyStage1.h"

class GameState
{
public:
	Player player;
	Bullets bullets[100];
	EnemyStage1 enemyS1 [100];

	float enemyTimer;
	float enemyDelay;

	// Initiate the characters
	void CreateObjs();
	void BulletInit(Bullets &currentBullet);
	void EnemyInit(EnemyStage1 &currentEnemyS1);
	void Spawn();
	void Collision();
	void Update();
	void Draw();

private:
	bool PlayerEnemyCollision(EnemyStage1 &currentEnemyS1);
	bool EnemyBulletCollision(Bullets &currentBullet, EnemyStage1 &currentEnemyS1);
};