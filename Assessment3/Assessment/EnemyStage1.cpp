#include "EnemyStage1.h"
#include "sfwdraw.h"

void EnemyStage1::Update()
{
	// Go opposite way if out of opRange
	if (x < (startX - opRange))
	{
		velX = -1;
	}

	if (x > (startX + opRange))
	{
		velX = 1;
	}

	// Move along x axis
	x -= velX * speedX * sfw::getDeltaTime();

	// Move along y axis
	y -= speedY * sfw::getDeltaTime();

	// Kill enemy if y < 0
	if (y < 0)
		isAlive = false;
}

void EnemyStage1::Draw()
{
	// Draw the enemy
	sfw::drawTexture(enemyStage1, x, y, 24, 24);
}
