#pragma once
#include "EnemyStage1.h"

class EnemyStage2 : public EnemyStage1
{
public:
	unsigned int enemyStage2;
	
	virtual void Update() override;
	virtual void Draw() override;
};