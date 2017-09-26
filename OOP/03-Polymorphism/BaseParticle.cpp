#include "BaseParticle.h"
#include "sfwdraw.h"

void BaseParticle::Update()
{

}

void BaseParticle::Draw()
{
	sfw::drawCircle(posX, posY, 5);
}
