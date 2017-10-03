#pragma once

#ifndef EXPLOSIONS_H
#define EXPLOSIONS_H

#include "EnemyStage1.h"
#include "EnemyStage2.h"

class Explosions
{
public:
	unsigned int explosions;

	void EnemyStage1ExplosionUpdate(EnemyStage1 &enemyS1);
	void EnemyStage1ExplosionDraw(EnemyStage1 &enemyS1);
	void EnemyStage2ExplosionUpdate(EnemyStage2 &enemyS2);
	void EnemyStage2ExplosionDraw(EnemyStage2 &enemyS2);
};

#endif EXPLOSIONS_H