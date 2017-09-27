#include <iostream>
#include "sfwdraw.h"
#include "GameState.h"

int main()
{
	// Create a window and a drawing context
	sfw::initContext(800, 600, "Bryan: Space Rouge");

	// Set the window background
	sfw::setBackgroundColor(BLACK);

	// Make a game state object
	GameState gs;
	gs.Init();


	// Game Loop
	while (sfw::stepContext())
	{
		// Update Stuff
		gs.Update();

		// Draw Stuff
		gs.Draw();
	}
}