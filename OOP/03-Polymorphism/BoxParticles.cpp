#include "BoxParticles.h"
#include "sfwdraw.h"

void BoxParticles::Update()
{
	bottomLeftX += speed * sfw::getDeltaTime();
	topRightX += speed * sfw::getDeltaTime();

	bottomLeftY += speed * sfw::getDeltaTime();
	topRightY += speed * sfw::getDeltaTime();
}

void BoxParticles::Draw()
{
	sfw::drawLine(bottomLeftX, bottomLeftY, topRightX, bottomLeftY);
	sfw::drawLine(topRightX, bottomLeftY, topRightX, topRightY);
	sfw::drawLine(topRightX, topRightY, bottomLeftX, topRightY);
	sfw::drawLine(bottomLeftX, topRightY, bottomLeftX, bottomLeftY);
}