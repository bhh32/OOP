#include "EnemyStage2.h"
#include "sfwdraw.h"

void EnemyStage2::Update()
{
	// Go opposite way if out of opRange
	if (x < (startX - opRange))
	{
		velX = -1;
	}

	if (x >(startX + opRange))
	{
		velX = 1;
	}

	// Move along x axis
	x -= velX * speedX * sfw::getDeltaTime();

	// Move along y axis
	y -= speedY * sfw::getDeltaTime();

	// Kill the enemy if off screen
	if (y < 0)
		isAlive = false;
}

void EnemyStage2::Draw()
{
	// Draw the enemy
	sfw::drawTexture(enemyStage2, x, y, 24, 24);
}
