//
// Created by Matthew Emerson on 10/15/19.
//

#ifndef CHIP8_DISPLAY_H
#define CHIP8_DISPLAY_H

#include <exception>
#include <SDL.h>

class Display {
public:
    Display();

    virtual ~Display();

private:
    SDL_Window *window;
    SDL_Surface *window_surface;
};

class InitDisplayException: public std::exception
{
    [[nodiscard]] const char* what() const noexcept override
    {
        return "There was an error initializing SDL";
    }
};

#endif //CHIP8_DISPLAY_H
