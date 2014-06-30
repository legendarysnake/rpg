#include "Common.h"

#include "CSurface.h"

#include "CFontBank.h"

CFontBank CFontBank::FontControl;

CFontBank::CFontBank()
{
}

int CFontBank::OnLoad(const char* File, int size)
{
    TTF_Font* TempFont = NULL;

    char TempFile[128];

    //sprintf(TempFile,"%s%s", DATA_DIR, File);

   

    FontList.push_back(TempFont);

    return (FontList.size() - 1);
}

void CFontBank::OnCleanup()
{
    for(unsigned int i = 0; i < FontList.size(); i++)
    {
        TTF_CloseFont(FontList[i]);
    }

    FontList.clear();
}

void CFontBank::PrintText(SDL_Renderer* Surf_Display, const char* text, unsigned int FontID, int X, int Y, int R , int G , int B)
{
    SDL_Surface *message = NULL;

    if(Surf_Display == NULL || FontID > FontList.size() - 1)
        return;

    SDL_Color textColor = { R, G, B };
    message = TTF_RenderText_Solid( FontList[FontID], text, textColor );
CSurface::OnLoad("./assets/Icebrand.png", Surf_Display);
message = IMG_Load("./assets/Icebrand.png");

SDL_Texture *t = SDL_CreateTextureFromSurface(Surf_Display,message);
   CSurface::OnDraw(Surf_Display, t, X, Y,X,Y,50,50);
}

