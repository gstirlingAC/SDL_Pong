#include "game.h"

bool Game::init()
{
	// Initialisation flag
	bool success = true;

	// Check to see if SDL and the video subsystem has initialised
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL failed to initialise! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		// Create a window
		window = SDL_CreateWindow(
			"Pong - Your first game made using SDL", // The window caption
			SDL_WINDOWPOS_CENTERED, // The x position of the window
			SDL_WINDOWPOS_CENTERED, // The y position of the window
			800, // The width of the window
			600, // The height of the window
			SDL_WINDOW_SHOWN | // Show window when created
			SDL_WINDOW_OPENGL // Created window is usable with OpenGL context
		);

		// If a window hasn't been created ...
		if (window == NULL)
		{
			// ... tell us why!
			printf("A window could not be created! SDL_Error: %s\n", SDL_GetError());
			success = false;
		}

	}

	// Show window for 4 seconds before destroying itself
	SDL_Delay(4000);

	return success;
}

void Game::run()
{
}
