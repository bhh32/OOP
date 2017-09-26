#include "Box.h"
#include "sfwdraw.h"

void Box::Draw()
{
	sfw::drawLine(bottomLeftX, bottomLeftY, topRightX, bottomLeftY);
	sfw::drawLine(topRightX, bottomLeftY, topRightX, topRightY);
	sfw::drawLine(topRightX, topRightY, bottomLeftX, topRightY);
	sfw::drawLine(bottomLeftX, topRightY, bottomLeftX, bottomLeftY);
}

void Box::Update()
{
	if (sfw::getKey(upKey))
	{
		if (y < 600)
			y++;
	}

	if (sfw::getKey(downKey))
	{
		if (y > 25)
			y--;
	}

	if (sfw::getKey(rightKey))
	{
		if (x < 800 - 25)
			x++;
	}

	if (sfw::getKey(leftKey))
	{
		if (x > 25)
			x--;
	}
}