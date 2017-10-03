#include "Player.h"
#include "GameState.h"
#include "sfwdraw.h"

void Player::Update()
{
	// Up Key Input
	if (sfw::getKey(upKey))
	{
		y += speed * sfw::getDeltaTime();
	}

	// Down Key Input
	if (sfw::getKey(downKey))
	{
		y -= speed * sfw::getDeltaTime();
	}

	// Right Key Input
	if (sfw::getKey(rightKey))
	{
		x += speed * sfw::getDeltaTime();
	}

	// Left Key Input
	if (sfw::getKey(leftKey))
	{
		x -= speed * sfw::getDeltaTime();
	}

	// Fire Key Input
	if (sfw::getKey(shotKey))
	{
		fireDelay -= .1f;
		if (fireDelay <= 0)
		{
			firedShot = true;
			fireDelay = .5f;
		}
	}

	// Create boarders along edges of screen
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
	// Draw the player
	sfw::drawTexture(ship, x, y, 74, 50, rotation);
}