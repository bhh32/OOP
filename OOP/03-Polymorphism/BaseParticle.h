#pragma once

#include "GameObject.h"

class BaseParticle : public GameObject
{
public:
	float posX, posY;
	float speedX, speedY;

	float dirRangeMaxX;
	float dirRangeMinX;
	float dirRangeMaxY;
	float dirRangeMinY;


	virtual void Update() override;
	virtual void Draw() override;
};