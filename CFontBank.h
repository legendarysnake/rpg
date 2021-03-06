#ifndef CFONTBANK_H_INCLUDED
#define CFONTBANK_H_INCLUDED

#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class CFontBank
{
public:
    static CFontBank           FontControl;


static std::vector<CFontBank*>     TextList;
public:
SDL_Color textcolor;
TTF_Font *font;
SDL_Texture *t;
SDL_Surface *message;
int r,g,b;
const char* text;
const char* file;
int x,y;
int size;
SDL_Renderer* Surf_Display;
    CFontBank();

    int OnLoad(const char* TEXT,const char* FILE, int size ,int X, int Y,int R, int G, int B);

    void OnCleanup();

    void PrintText(SDL_Renderer* Surf_Display);

};

#endif // CFONTBANK_H_INCLUDED

