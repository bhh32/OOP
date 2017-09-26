#include "Line.h"
#include "sfwdraw.h"

void Line::Draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}