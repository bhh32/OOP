#include "Player.h"
#include "sfwdraw.h"

void Player::Update()
{
	PlayerControls();
}

void Player::Draw()
{
	
	sfw::drawCircle(x, y, 25);
}

void Player::PlayerControls()
{
	if (sfw::getKey(upKey))
	{
		if(y < 600 - 25)
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