#pragma once

#include "Player.h"
#include "Bullets.h"

class GameState
{
public:
	Player player;
	Bullets bullets[100];

	// Initiate the characters
	void Init();
	void BulletInit(Bullets &currentBullet);
	void Spawn();
	void Update();
	void Draw();
};