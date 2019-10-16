//
// Created by Matthew Emerson on 10/15/19.
//

#include <SDL.h>
#include "Display.h"


Display::Display() {
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        throw InitDisplayException();
    }

    window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if(window == NULL) {
        throw InitDisplayException();
    }

    window_surface = SDL_GetWindowSurface(window);
}

Display::~Display() {
    // window_surface is freed when the window is destroyed
    SDL_DestroyWindow(window);
    window = NULL;
}
