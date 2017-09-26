#include "Player.h"
#include "sfwdraw.h"

void Player::Update()
{
	if (sfw::getKey('W'))
		y++;
	if (sfw::getKey('S'))
		y--;
	if (sfw::getKey('D'))
		x++;
	if (sfw::getKey('A'))
		x--;
}

void Player::Draw()
{
	sfw::drawCircle(x, y, 50);
}