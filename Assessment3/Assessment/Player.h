#pragma once

#include "Character.h"

class Player : public Character
{
public:
	char shotKey;
	bool firedShot;

	virtual void Update() override;
	virtual void Draw() override;

private:
	unsigned int ship;
};