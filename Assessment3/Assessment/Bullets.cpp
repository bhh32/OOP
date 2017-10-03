#include "Bullets.h"
#include "sfwdraw.h"

void Bullets::Update()
{
	// Move the bullet as long as it's lifetime is > 0
	if (lifeTime >= 0)
	{
		y += speed * sfw::getDeltaTime();
	}

	// Count down bullet life
	lifeTime -= sfw::getDeltaTime();
}

void Bullets::Draw()
{
	// Draw the bullet as long as it's lifetime is > 0
	if (lifeTime >= 0)
	{
		sfw::drawCircle(x, y, 1);
	}
}
