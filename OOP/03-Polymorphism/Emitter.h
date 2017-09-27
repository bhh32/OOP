#pragma once

#include "GameObject.h"
#include "CircleParticle.h"

class Emitter : public GameObject
{
	// Time since last particle
	float spawnAccumulator;

public:
	Emitter();

	// Collection of all particles
	CircleParticle particles[100];

	// Current particle id
	int particleId;

	// Time between each particle spawned.
	float spawnInterval;

	virtual void Update() override;
	virtual void Draw() override;

};
