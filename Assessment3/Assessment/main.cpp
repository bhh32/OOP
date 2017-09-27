#include <iostream>
#include "sfwdraw.h"
#include "GameState.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(1240, 860, "Bryan: Space Rouge");

	// Set the window background
	sfw::setBackgroundColor(BLACK);

	// Make a game state object
	GameState gs;
	gs.CreateObjs();


	// Game Loop
	while (sfw::stepContext())
	{
		// Update Stuff
		gs.Update();

		// Draw Stuff
		gs.Draw();
	}
}