//=============================================================================

#include "CText.h"
#include "Define.h"

void CText::apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( source, clip, destination, &offset );
}
CText::CText() {

}
SDL_Surface *CText::drawtext(TTF_Font *fonttodraw, char fgR, char fgG, char fgB, char fgA,char bgR, char bgG, char bgB, char bgA, char text[], textquality quality)
  {
    SDL_Color tmpfontcolor = {fgR,fgG,fgB,fgA};
    SDL_Color tmpfontbgcolor = {bgR, bgG, bgB, bgA};
    SDL_Surface *resulting_text;
 
    if (quality == solid) resulting_text = TTF_RenderText_Solid(fonttodraw, text, tmpfontcolor);
    else if (quality == shaded) resulting_text = TTF_RenderText_Shaded(fonttodraw, text, tmpfontcolor, tmpfontbgcolor);
    else if (quality == blended) resulting_text = TTF_RenderText_Blended(fonttodraw, text, tmpfontcolor);
 
    return resulting_text;
  }
SDL_Texture* CText::Draw(char* pfont,char* ptext, int psize, SDL_Renderer* MainRender){

SDL_Surface *tempSurface;


  SDL_Texture* tex;  
  //tex = SDL_CreateTextureFromSurface(rend, tempSurface);

 //   SDL_FreeSurface(tempSurface);


SDL_Color textColor = { 255, 255, 255 };
font = TTF_OpenFont( pfont, psize );
SDL_Surface *message =  TTF_RenderText_Solid( font, ptext, textColor );
SDL_Surface *screen;
SDL_Texture* Surf_Return = NULL;



  SDL_Surface *text_surface = drawtext(font, 1, 1, 1, 1, 0, 0, 0, 1, "my text", solid);
 
  //Setup the location on the screen to blit to
  SDL_Rect rect;
rect.x=0;
rect.y=0;
rect.w=5000;
rect.h=5000;
  //Blit text_surface surface to the screen surface
 


SDL_Surface* Surf_temp = NULL;
screen = SDL_GetWindowSurface(window);
//CText::apply_surface( 0, 0, message, screen,NULL );

Surf_temp= IMG_Load("./assets/Icebrand.png");
//Surf_Return = CSurface::OnLoad("./assets/Icebrand.png",MainRender);
// Surf_Return = SDL_CreateTextureFromSurface( MainRender, Surf_temp);
 SDL_BlitSurface(Surf_temp, NULL, screen, &rect); 
//mpSurface = TTF_RenderGlyph_Blended(font, 2, textColor);
SDL_Texture* atex= SDL_CreateTextureFromSurface(MainRender,screen);

SDL_RenderCopy(MainRender, atex, NULL, &rect);
SDL_UpdateWindowSurface(window);
//return Surf_Return;
}

//=============================================================================

//------------------------------------------------------------------------------

