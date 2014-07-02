#include "Common.h"

#include "CSurface.h"

#include "CFontBank.h"
std::vector<CFontBank*> CFontBank::TextList;

CFontBank CFontBank::FontControl;

CFontBank::CFontBank()
{
}

int CFontBank::OnLoad(const char* TEXT,const char* FILE, int SIZE ,int X, int Y,int R, int G, int B)
{
text =TEXT;
r= R;
g= G;
b= B;
x=X;
y=Y;
size = SIZE;
file=FILE;


}

void CFontBank::OnCleanup()
{

}

void CFontBank::PrintText(SDL_Renderer* Surf_Display)
{
    SDL_Surface *message = NULL;

  //  if(Surf_Display == NULL )
  //      return;
 TTF_Font *font;
font = TTF_OpenFont( file, size );
    SDL_Color textColor = { r, g, b };
    message = TTF_RenderText_Solid( font, text, textColor );


SDL_Texture *t = SDL_CreateTextureFromSurface(Surf_Display,message);
   CSurface::OnDraw(Surf_Display, t, x, y,0,0,150,30);
}

