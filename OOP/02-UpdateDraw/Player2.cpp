#include "Player2.h"
#include "sfwdraw.h"

void Player2::Update()
{
	PlayerControls();
}

void Player2::Draw()
{
	sfw::drawCircle(x, y, 25);
}

void Player2::PlayerControls()
{
	if (sfw::getKey('I'))
	{
		if (y < 600 - 25)
			y++;
	}

	if (sfw::getKey('K'))
	{
		if (y > 25)
			y--;
	}

	if (sfw::getKey('L'))
	{
		if (x < 800 - 25)
			x++;
	}

	if (sfw::getKey('J'))
	{
		if (x > 25)
			x--;
	}
}