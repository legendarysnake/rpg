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
font = TTF_OpenFont( file, size );
textcolor = { r, g, b };

}

void CFontBank::OnCleanup()
{

}

void CFontBank::PrintText(SDL_Renderer* Surf_Display)
{
message = TTF_RenderText_Solid( font, text, textcolor );
t = SDL_CreateTextureFromSurface(Surf_Display,message);
    CSurface::OnDraw(Surf_Display, t, x, y,0,0,150,15);
}

