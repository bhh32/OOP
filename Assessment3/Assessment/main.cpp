#include <iostream>
#include <Windows.h> // Used for Sleep
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
		// Check to see if the game is over
		if (gs.isGameOver)
		{
			// Sleep so the game over text can appear
			Sleep(1500);
			// break out of the loop to finish the game
			break;
		}

		// Update Stuff
		gs.Update();

		// Draw Stuff
		gs.Draw();		
	}
}