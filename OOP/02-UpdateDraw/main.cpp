#include <iostream>
#include "sfwdraw.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "Bryan's Game");

	// set the background color
	sfw::setBackgroundColor(BLACK);

	// setup the game loop
	while (sfw::stepContext())
	{
		// game code goes here
	}

	// clean up
	sfw::termContext();
}