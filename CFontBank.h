#ifndef CFONTBANK_H_INCLUDED
#define CFONTBANK_H_INCLUDED

#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class CFontBank
{
public:
    static CFontBank           FontControl;

    std::vector<TTF_Font*>     FontList;

public:
    CFontBank();

    int OnLoad(const char* File, int size = 22);

    void OnCleanup();

    void PrintText(SDL_Renderer* Surf_Display, const char* text, unsigned int FontID, int X, int Y, int R , int G , int B );

};

#endif // CFONTBANK_H_INCLUDED

