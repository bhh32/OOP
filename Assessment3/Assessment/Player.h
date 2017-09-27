#pragma once

#include "Character.h"

class Player : public Character
{
public:
	char shotKey;
	float fireDelay;
	bool firedShot;

	virtual void Update() override;
	virtual void Draw() override;

private:
	unsigned int ship;
};