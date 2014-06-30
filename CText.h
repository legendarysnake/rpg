//=============================================================================
#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include <SDL2/SDL_image.h>
#include <string>
#include "CSurface.h"
#ifndef _CTEXT_H_
#define _CTEXT_H_
//=============================================================================
class CText  {
    public:
        CText();
enum textquality {solid, shaded, blended};
char *text;
SDL_Surface *background = NULL;
SDL_Surface *message = NULL;
SDL_Surface *screen = NULL;


//The font that's going to be used
TTF_Font *font;

//The color of the font
SDL_Color textColor = { 255, 255, 255 };
SDL_Window* window;
  
virtual SDL_Texture* Draw(char* pfont,char* ptext, int psize, SDL_Renderer* MainRender);
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip );   
SDL_Surface *drawtext(TTF_Font *fonttodraw, char fgR, char fgG, char fgB, char fgA, 
  char bgR, char bgG, char bgB, char bgA, char text[], textquality quality);


};

//=============================================================================

#endif 
