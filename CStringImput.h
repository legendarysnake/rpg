//=============================================================================
//=============================================================================
#ifndef _CSTRINGIMPUT_H_
#define _CSTRINGIMPUT_H_
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include <string>
#include "CStringImput.h"

//=============================================================================
class CStringInput
{
    private:
    //The storage string
    std::string str;

    //The text surface
    SDL_Surface *text;

    public:
    //Initializes variables
    CStringInput();

    //Does clean up
    CStringInput();

    //Handles input
    void handle_input();

    //Shows the message on screen
    void show_centered();
};
//=============================================================================

#endif
