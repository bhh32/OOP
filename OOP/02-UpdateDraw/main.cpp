#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Player2.h"
#include "Circle.h"
#include "Line.h"
#include "Box.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "Bryan's Game");

	// Put Image into a variable
	unsigned int img = sfw::loadTextureMap("res/spaceship-png-icon-8.png");

	// set the background color
	sfw::setBackgroundColor(BLACK);

	// CLOSED ACTIVITIES
	//Player me;
	//
	//me.upKey = 'W';
	//me.downKey = 'S';
	//me.leftKey = 'A';
	//me.rightKey = 'D';

	//me.x = 400;
	//me.y = 300;

	//Player you;
	//you.upKey = 'I';
	//you.downKey = 'K';
	//you.leftKey = 'J';
	//you.rightKey = 'L';

	//you.x = 600;
	//you.y = 300;

	//// OPEN ACTIVITIES
	////1.) Circle Object
	//Circle circle;
	//circle.posX = 400;
	//circle.posY = 300;
	//circle.radius = 100;

	////2.) Line Object
	//Line line;
	//line.startX = 56;
	//line.startY = 60;
	//line.endX = 200;
	//line.endY = 204;

	////3.) Box Object
	Box box;
	/*box.bottomLeftX = 100;
	box.bottomLeftY = 100;

	box.topRightX = 300;
	box.topRightY = 300;*/

	box.upKey = 'W'; // Space SHIP!!!
	box.downKey = 'S';
	box.rightKey = 'D';
	box.leftKey = 'A';

	box.x = 400;
	box.y = 300;

	// setup the game loop
	while (sfw::stepContext())
	{
		// CLOSED ACTIVITIES
		
		//Update Stuff
		/*me.Update();
		you.Update();*/
		box.Update();

		// Draw Stuff
		/*me.Draw();
		you.Draw();*/


		// OPEN ACTIVITIES
		/*circle.Draw();
		line.Draw();
		box.Draw();*/

		// Drawing An Image
		sfw::drawTexture(img, box.x, box.y, 74, 50);
	}

	// clean up
	sfw::termContext();
}