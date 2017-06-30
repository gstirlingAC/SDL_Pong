#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include <stdio.h>

class Game
{
public:
	bool init();
	void run();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;

};

#endif
