#include "EnemyStage2.h"
#include "sfwdraw.h"

void EnemyStage2::Update()
{
	if (x < (startX - opRange))
	{
		velX = -1;
	}

	if (x >(startX + opRange))
	{
		velX = 1;
	}

	x -= velX * speedX * sfw::getDeltaTime();
	y -= speedY * sfw::getDeltaTime();

	if (y < 0)
		isAlive = false;
}

void EnemyStage2::Draw()
{
	sfw::drawTexture(enemyStage2, x, y, 24, 24);
}
