#include "game.h"

int main(int argc, char ** argv)
{
	// Create an instance of the Game class
	Game* game = new Game();

	// Run the game
	game->init();

	return 0;
}