#include "Player.h"
#include "GameState.h"
#include "sfwdraw.h"

void Player::Update()
{
	if (sfw::getKey(upKey))
	{
		y += speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(downKey))
	{
		y -= speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(rightKey))
	{
		x += speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(leftKey))
	{
		x -= speed * sfw::getDeltaTime();
	}

	if (sfw::getKey(shotKey))
	{
		fireDelay -= .1f;
		if (fireDelay <= 0)
		{
			firedShot = true;
			fireDelay = .5f;
		}
	}

	if (x > 1240 - 25)
		x = 1240 - 25;
	else if (x < 25)
		x = 25;

	if (y > 860 - 25)
		y = 860 - 25;
	else if (y < 25)
		y = 25;

}

void Player::Draw()
{
	sfw::drawTexture(ship, x, y, 74, 50, rotation);
}