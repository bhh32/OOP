#pragma once

#include "BaseParticle.h"

class BoxParticles : BaseParticle
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	float speed;

	virtual void Update() override;
	virtual void Draw() override;
};