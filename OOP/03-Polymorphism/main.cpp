#include <iostream>
#include <ctime>
#include <random>
#include "sfwdraw.h"
#include "Person.h"
#include "Officer.h"
#include "Player.h"
#include "CircleParticle.h"
#include "BoxParticles.h"

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
	int randX = 0;
	int randY = 0;
	int randSpeed = 0;

	CircleParticle circParticles[50];

	for (int i = 0; i < 50; i++)
	{
		randX = rand() % 400 + 1;
		randY = rand() % 400 + 1;
		randSpeed = rand() % 20 + 1;

		circParticles[i].posX = randX;
		circParticles[i].posY = randY;
		circParticles[i].rad = 5;
		circParticles[i].speedX = randSpeed;
		circParticles[i].speedY = randSpeed;
	}

	BoxParticles boxParticles[50];

	boxParticles[0].bottomLeftX = 600;
	boxParticles[0].bottomLeftY = 400;
	boxParticles[0].topRightX = 610;
	boxParticles[0].topRightY = 410;

	boxParticles[0].speed = 20;


	while (sfw::stepContext())
	{
		/** CLOSED ACTIVITES **/
		/*player.Update();
		player.Draw();*/


		/** OPEN ACTIVITIES **/

		// Circle Particles
		for (int i = 0; i < 10; i++)
		{
			circParticles[i].Update();
			
		}

		for (int i = 0; i < 10; i++)
		{
			circParticles[i].Draw();
		}
		boxParticles[0].Update();
		boxParticles[0].Draw();
	}

	return 0;
}
