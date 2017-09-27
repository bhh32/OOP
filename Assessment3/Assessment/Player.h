#pragma once

#include "Character.h"

class Player : public Character
{
public:
	unsigned int ship;
	int lives;
	bool isDead;
	char shotKey;
	float fireDelay;
	bool firedShot;
	int score;

	virtual void Update() override;
	virtual void Draw() override;
	
};