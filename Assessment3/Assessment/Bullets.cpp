#include "Bullets.h"
#include "sfwdraw.h"

void Bullets::Update()
{
	if (lifeTime >= 0)
	{
		y += speed * sfw::getDeltaTime();
	}

	lifeTime -= sfw::getDeltaTime();
}

void Bullets::Draw()
{
	if (lifeTime >= 0)
	{
		sfw::drawLine(x, y, x + 10, y + 10);
	}
}
