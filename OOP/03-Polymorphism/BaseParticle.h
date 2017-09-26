#pragma once

#include "GameObject.h"

class BaseParticle : GameObject
{
public:
	float posX, posY;
	float speedX, speedY;

	virtual void Update() override;
	virtual void Draw() override;
};