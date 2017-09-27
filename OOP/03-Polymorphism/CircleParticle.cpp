#include "CircleParticle.h"
#include "sfwdraw.h"
#include <ctime>
#include <random>

void CircleParticle::Update()
{
	if (posX >= dirRangeMaxX || posX <= dirRangeMinX)
		speedX *= -1;

	if (posY >= dirRangeMaxY || posY <= dirRangeMinY)
		speedY *= -1;

	posX += speedX * sfw::getDeltaTime();
	posY += speedY * sfw::getDeltaTime();
}

void CircleParticle::Draw()
{
	sfw::drawCircle(posX, posY, rad);
}