#include "Explosions.h"
#include "sfwdraw.h"

void Explosions::EnemyStage1ExplosionUpdate(EnemyStage1 &enemyS1)
{
	for (int i = 0; i < 13; ++i)
	{
		switch (enemyS1.explosionCount)
		{
		case 0:
			explosions = sfw::loadTextureMap("res/exp1.png");
			break;
		case 1:
			explosions = sfw::loadTextureMap("res/exp2.png");
			break;
		case 2:
			explosions = sfw::loadTextureMap("res/exp3.png");
			break;
		case 3:
			explosions = sfw::loadTextureMap("res/exp4.png");
			break;
		case 4:
			explosions = sfw::loadTextureMap("res/exp5.png");
			break;
		case 5:
			explosions = sfw::loadTextureMap("res/exp6.png");
			break;
		case 6:
			explosions = sfw::loadTextureMap("res/exp7.png");
			break;
		case 7:
			explosions = sfw::loadTextureMap("res/exp8.png");
			break;
		case 8:
			explosions = sfw::loadTextureMap("res/exp9.png");
			break;
		case 9:
			explosions = sfw::loadTextureMap("res/exp10.png");
			break;
		case 10:
			explosions = sfw::loadTextureMap("res/exp11.png");
			break;
		case 11:
			explosions = sfw::loadTextureMap("res/exp12.png");
			break;
		case 12:
			explosions = sfw::loadTextureMap("res/exp1.png");
			break;
		}

		enemyS1.explosionCount++;
	}
}

void Explosions::EnemyStage1ExplosionDraw(EnemyStage1 & enemyS1)
{
	sfw::drawTexture(explosions, enemyS1.x, enemyS1.y, 74, 74);
}

void Explosions::EnemyStage2ExplosionUpdate(EnemyStage2 & enemyS2)
{
	for (int i = 0; i < 13; ++i)
	{
		switch (enemyS2.explosionCount)
		{
		case 0:
			explosions = sfw::loadTextureMap("res/exp1.png");
			break;
		case 1:
			explosions = sfw::loadTextureMap("res/exp2.png");
			break;
		case 2:
			explosions = sfw::loadTextureMap("res/exp3.png");
			break;
		case 3:
			explosions = sfw::loadTextureMap("res/exp4.png");
			break;
		case 4:
			explosions = sfw::loadTextureMap("res/exp5.png");
			break;
		case 5:
			explosions = sfw::loadTextureMap("res/exp6.png");
			break;
		case 6:
			explosions = sfw::loadTextureMap("res/exp7.png");
			break;
		case 7:
			explosions = sfw::loadTextureMap("res/exp8.png");
			break;
		case 8:
			explosions = sfw::loadTextureMap("res/exp9.png");
			break;
		case 9:
			explosions = sfw::loadTextureMap("res/exp10.png");
			break;
		case 10:
			explosions = sfw::loadTextureMap("res/exp11.png");
			break;
		case 11:
			explosions = sfw::loadTextureMap("res/exp12.png");
			break;
		case 12:
			explosions = sfw::loadTextureMap("res/exp1.png");
			break;
		}
		enemyS2.explosionCount++;
	}
}

void Explosions::EnemyStage2ExplosionDraw(EnemyStage2 &enemyS2)
{
	sfw::drawTexture(explosions, enemyS2.x, enemyS2.y, 74, 74);
}