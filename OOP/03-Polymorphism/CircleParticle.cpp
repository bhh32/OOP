#include "CircleParticle.h"
#include "sfwdraw.h"
#include <ctime>
#include <random>

void CircleParticle::Update()
{
	posX += speedX * sfw::getDeltaTime();;
	posY += speedY * sfw::getDeltaTime();
}

void CircleParticle::Draw()
{
	sfw::drawCircle(posX, posY, rad);
}