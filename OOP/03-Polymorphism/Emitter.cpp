#include "Emitter.h"
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; ++i)
	{
		particles[i].enabled = false;
	}

	spawnAccumulator = 0;
}

void Emitter::Update()
{
	// Check if it's time to spawn a new one
	// if so, create one
	spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		// Look for an inactive particle
		for (int i = 0; i < 100; ++i)
			if (!particles[i].enabled)
			{
				CircleParticle &baby = particles[i];
				
				baby.posX = 400;
				baby.posY = 300;

				baby.speedX = 0;
				baby.speedY = 500;
				baby.rad = 5;

				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;
			}

	}

	// Update all of the active particles
	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled == true)
			particles[i].Update();
	}
	
}

void Emitter::Draw()
{
	// Only draw active particles
	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled)
			particles[i].Draw();
	}
}