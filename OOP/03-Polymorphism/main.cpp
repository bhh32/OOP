#include <iostream>
#include <ctime>
#include <random>
#include "sfwdraw.h"
#include "Person.h"
#include "Officer.h"
#include "Player.h"
#include "CircleParticle.h"
#include "BoxParticles.h"
#include "Emitter.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "Bryan's Game");

	// set the background color
	sfw::setBackgroundColor(BLACK);

	/*Person me("Bryan", 90);
	Officer cole("Cole Phelps", 20, 1247);
	
	me.Greet();
	me.IsHappy();

	cole.Greet();
	cole.IsHappy();*/

	

	/** CLOSED ACTIVITIES **/
	/*Player player;
	player.x = 400;
	player.y = 300;*/

	/** OPEN ACTIVITIES **/
	srand(time(NULL));
	float randX = 0;
	float randY = 0;
	float randSpeed = 0;
	float randDirMaxX = 0;
	float randDirMinX = 0;
	float randDirMaxY = 0;
	float randDirMinY = 0;

	CircleParticle circParticles[100];

	for (int i = 0; i < 100; i++)
	{
		randX = rand() % 400 + 1;
		randY = rand() % 400 + 1;
		randSpeed = rand() % 25 + 1;
		randDirMaxX = rand() % 500 + 1;
		randDirMinX = rand() % 50 + 1;
		randDirMaxY = rand() % 500 + 1;
		randDirMinY = rand() % 50 + 1;


		circParticles[i].posX = randX;
		circParticles[i].posY = randY;
		circParticles[i].rad = 5;
		circParticles[i].speedX = randSpeed;
		circParticles[i].speedY = randSpeed;
		circParticles[i].dirRangeMaxX = randDirMaxX;
		circParticles[i].dirRangeMinX = randDirMinX;
		circParticles[i].dirRangeMaxY = randDirMaxY;
		circParticles[i].dirRangeMinY = randDirMinY;
	}

	BoxParticles boxParticles[100];

	for (int i = 0; i < 100; i++)
	{
		randX = rand() % 500 + 1;
		randY = rand() % 500 + 1;
		randSpeed = rand() % 25 + 1;
		randDirMaxX = rand() % 500 + 1;
		randDirMinX = rand() % 50 + 1;
		randDirMaxY = rand() % 500 + 1;
		randDirMinY = rand() % 50 + 1;

		boxParticles[i].bottomLeftX = randX;
		boxParticles[i].bottomLeftY = randY;
		boxParticles[i].topRightX = randX + 10;
		boxParticles[i].topRightY = randY + 10;
		boxParticles[i].dirRangeMaxX = randDirMaxX;
		boxParticles[i].dirRangeMinX = randDirMinX;
		boxParticles[i].dirRangeMaxY = randDirMaxY;
		boxParticles[i].dirRangeMinY = randDirMinY;

		boxParticles[i].speed = randSpeed;
	}
	Emitter emitter;
	emitter.spawnInterval = 3.f;

	while (sfw::stepContext())
	{
		/** CLOSED ACTIVITES **/
		/*player.Update();
		player.Draw();*/


		/** OPEN ACTIVITIES **/

		// Circle Particles
		for (int i = 0; i < 100; i++)
		{
			circParticles[i].Update();
			boxParticles[i].Update();
		}

		for (int i = 0; i < 100; i++)
		{
			circParticles[i].Draw();
			boxParticles[i].Draw();
		}
		
		
	}

	return 0;
}
