#pragma once

#include "Character.h"

class EnemyStage1 : public Character
{
public:


	bool isAlive;
	bool playDeath;
	float opRange;
	float startX;
	float velX;
	float speedX;
	float speedY;
	unsigned int enemyStage1;


	
	virtual void Update() override;
	virtual void Draw() override;
};