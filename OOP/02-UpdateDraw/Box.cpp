#include "Box.h"
#include "sfwdraw.h"

void Box::Draw()
{
	sfw::drawLine(width, height, width * 2, height * 2);
	sfw::drawLine(width* 2, height * 2, width/2 , height/2);
	sfw::drawLine(width / 2, height/2, width*2, height* 2);
	sfw::drawLine(width/2, height/2, width , height);
}