#include "SDL2/SDL_render.h"
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("Gambling Elves",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_Texture* elf_model = IMG_LoadTexture(renderer, "assets/elf.gif");
	int w, h;
	SDL_QueryTexture(elf_model, NULL, NULL, &w, &h);

	// define the texture's dims
	SDL_Rect txtr;
	txtr.x = 0; txtr.y = 0;
	txtr.w = w; txtr.h = h;

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderPresent(renderer);

	SDL_Event e;
	int quit = 0;
	while (!quit) {
		if (SDL_PollEvent(&e))
			if (e.type == SDL_QUIT) quit = 1;

		// draw the image to the screen
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, elf_model, NULL, &txtr);
		SDL_RenderPresent(renderer);
	}
}

