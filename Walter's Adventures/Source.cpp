#include <SDL.h>
#include <SDL_Image.h>
#include <iostream>
#include "func.h"
#include <math.h>
#include "Standard values.h"

void WindowDelay()
{
	static int time = 0;
	while (true)
	{
		if (clock() - time >= 1000 / FPS)
		{
			time = clock();
			break;
		}
		else
			SDL_Delay(1);
	}
}


int main(int argc, char* argv[])
{
	system("chcp 1251");



	SDL_DestroyRenderer(ren_Logvinov);
	SDL_DestroyWindow(win_Logvinov);
	SDL_Quit();
	return 0;
}