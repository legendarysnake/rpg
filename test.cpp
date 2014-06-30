#include <SDL2/SDL.h>
#include "SDL/SDL_ttf.h"
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( source, clip, destination, &offset );
}
int main(){
SDL_Surface *message = NULL;
SDL_Surface *screen = NULL;
SDL_Init(SDL_INIT_EVERYTHING);
TTF_Font *font = NULL;
SDL_Color textColor = { 255, 255, 255 };
SDL_Window* window;
SDL_Renderer* Surf_Display;
#define WWIDTH		640
#define	WHEIGHT		480
window = SDL_CreateWindow("Open Multiplayer RPG",
                        SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED,
                        WWIDTH, WHEIGHT,
                        SDL_WINDOW_RESIZABLE );
Surf_Display = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE|SDL_RENDERER_PRESENTVSYNC );
SDL_Surface *bmp = SDL_LoadBMP("b.bmp");
SDL_Texture * texture = SDL_CreateTextureFromSurface(Surf_Display,bmp);
SDL_RenderClear(Surf_Display);
SDL_RenderCopy(Surf_Display,texture, NULL,NULL);
SDL_RenderPresent(Surf_Display);
font = TTF_OpenFont( "./lazy.ttf", 28 );

    message = TTF_RenderText_Solid( font, "The quick brown fox jumps over the lazy dog", textColor );
apply_surface( 0, 150, message, screen );
SDL_RenderCopy(Surf_Display,screen, NULL,NULL);
SDL_RenderPresent(Surf_Display);
bool running = true;
while (running){

};
};
