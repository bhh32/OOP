#pragma once

#include "Character.h"

class Bullets : public Character
{
public:
	float lifeTime;
	bool beenShot;
	bool initShot;

	virtual void Update() override;
	virtual void Draw() override;
};
