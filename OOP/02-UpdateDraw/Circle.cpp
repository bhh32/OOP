#include "Circle.h"
#include "sfwdraw.h"

void Circle::Draw()
{
	sfw::drawCircle(posX, posY, radius);
}