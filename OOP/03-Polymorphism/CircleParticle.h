#pragma once

#include "BaseParticle.h"

class CircleParticle : public BaseParticle
{
public:
	float posX, posY, rad;
	float speedX, speedY;

	virtual void Update() override;
	virtual void Draw() override;
};