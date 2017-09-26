#pragma once

#include "GameObject.h"

class Player : public GameObject
{
public:
	float x, y;

	virtual void Update() override;
	virtual void Draw() override;
};