#include "EnemyStage1.h"
#include "sfwdraw.h"

void EnemyStage1::Update()
{
	if (x < (startX - opRange))
	{
		velX = -1;
	}

	if (x > (startX + opRange))
	{
		velX = 1;
	}

	x -= velX * speedX * sfw::getDeltaTime(); 
	y -= speedY * sfw::getDeltaTime();

	if (y < 0)
		isAlive = false;
}

void EnemyStage1::Draw()
{
	sfw::drawTexture(enemyStage1, x, y, 24, 24);
}
