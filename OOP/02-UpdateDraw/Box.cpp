#include "Box.h"
#include "sfwdraw.h"

void Box::Draw()
{
	/*sfw::drawLine(bottomLeftX, bottomLeftY, topRightX, bottomLeftY);
	sfw::drawLine(topRightX, bottomLeftY, topRightX, topRightY);
	sfw::drawLine(topRightX, topRightY, bottomLeftX, topRightY);
	sfw::drawLine(bottomLeftX, topRightY, bottomLeftX, bottomLeftY);*/

	unsigned int img = sfw::loadTextureMap("res/spaceship-png-icon-8.png");

	sfw::drawTexture(img, x, y, 74, 50, rotation);
}

void Box::Update()
{
	if (sfw::getKey(upKey))
	{
		if (y < 600)
			y += speed * sfw::getDeltaTime();

		if (rotation != 0)
			rotation = 0;
	}

	if (sfw::getKey(downKey))
	{
		if (y > 25)
			y -= speed * sfw::getDeltaTime();

		if (rotation != 180)
			rotation = 180;
	}

	if (sfw::getKey(rightKey))
	{
		if (x < 800 - 25)
			x += speed * sfw::getDeltaTime();

		if (rotation != -90)
			rotation = -90;
	}

	if (sfw::getKey(leftKey))
	{
		if (x > 25)
			x -= speed * sfw::getDeltaTime();

		if (rotation != 90)
			rotation = 90;
	}

	if (sfw::getKey(upKey) && sfw::getKey(rightKey))
	{
		if (rotation != 315)
			rotation = 315;		
	}

	if (sfw::getKey(upKey) && sfw::getKey(leftKey))
	{
		if (rotation != 45)
			rotation = 45;		
	}

	if (sfw::getKey(downKey) && sfw::getKey(rightKey))
	{
		if (rotation != 225)
			rotation = 225;
	}

	if (sfw::getKey(downKey) && sfw::getKey(leftKey))
	{
		if (rotation != 135)
			rotation = 135;		
	}
}