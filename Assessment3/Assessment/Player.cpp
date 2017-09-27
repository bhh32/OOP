#include "Player.h"
#include "GameState.h"
#include "sfwdraw.h"

void Player::Update()
{
	if (sfw::getKey(upKey))
	{
		if (y < 600)
			y += speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(downKey))
	{
		if (y > 25)
			y -= speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(rightKey))
	{
		if (x < 800 - 25)
			x += speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(leftKey))
	{
		if (x > 25)
			x -= speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(shotKey))
	{
		firedShot = true;
	}
}

void Player::Draw()
{
	ship = sfw::loadTextureMap("res/spaceship-png-icon-8.png");

	sfw::drawTexture(ship, x, y, 74, 50, rotation);
}