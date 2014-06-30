//==============================================================================
#include "CApp.h"
#include "SDL2/SDL_image.h"

//==============================================================================
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
bool CApp::OnInit()
{




	if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("failed to initi\n");
		printf("SDL_Init failed: %s\n", SDL_GetError()); 
        	return false;

    	}


	 window = SDL_CreateWindow("Open Multiplayer RPG",
                        SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED,
                        WWIDTH, WHEIGHT,
                        SDL_WINDOW_RESIZABLE );


	 Surf_Display = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE|SDL_RENDERER_PRESENTVSYNC );


	/*
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if((Surf_Display = SDL_SetVideoMode(WWIDTH, WHEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }
	*/ 


	 
    if(CArea::AreaControl.OnLoad("assets/maps/1.area", Surf_Display ) == false) {

	printf("failed to Load Map"); 
    	return false;
    }
	

    //SDL_EnableKeyRepeat(1, SDL_DEFAULT_REPEAT_INTERVAL / 3);

    if(Player.OnLoad("./assets/onionknight.png", 32, 52, 0, Surf_Display) == false) {
	
	printf("failed to Load Onion Knight"); 
    	return false;
    }
if(TTF_Init()==-1) {
   fprintf(stderr, "Error: unable to initialize TTF_SDL, %s\n", TTF_GetError());
   return false;
 }

    if(Weapon.OnLoad("./assets/Icebrand.png", 25,25, 8, Surf_Display) == false) {
printf("failed to Load Icebrand"); 
    	return false;
    }
//txt.Draw("./lazy.ttf","olá",1000,Surf_Display);
txt.OnLoad("./font.ttf",20);


   CEntity::EntityList.push_back(&Player);
//CEntity::EntityList.push_back(&Weapon);
   //CLoginScreen::LOADIMAGE.OnLoad("b.png",32,52,8,Surf_Display);

	CCamera::CameraControl.TargetMode = TARGET_MODE_CENTER;
    CCamera::CameraControl.SetTarget(&Player.X, &Player.Y);
SDL_Surface *message = NULL;
    SDL_Color textColor = {255,255,255};

SDL_Rect rect;
    SDL_Texture *bitmapTex = NULL;
    SDL_Surface *bitmapSurface = NULL;

rect.x=0;
rect.y=0;
rect.w=100;
rect.h=100;
font = TTF_OpenFont( "./font.ttf", 50 );
if(!font) {
    printf("TTF_OpenFont: %s\n", TTF_GetError());
    // handle error
}
   message = TTF_RenderText_Solid( font, "aaaaaaaaaaaaaaaaaaaaaaa", textColor );
SDL_Surface *screen;
txt.PrintText(Surf_Display,"aaaaa",1,static_cast<int>(Player.X),static_cast<int>(Player.Y),255,255,255);
//screen = SDL_GetWindowSurface(window);
//SDL_BlitSurface(message, NULL, screen, &rect);
//SDL_Texture* atex= SDL_CreateTextureFromSurface(Surf_Display,screen);
//bitmapSurface = SDL_LoadBMP("./assets/onionknight.png");
//    bitmapTex = SDL_CreateTextureFromSurface(Surf_Display, bitmapSurface);
 // SDL_RenderCopy(Surf_Display, atex, NULL, NULL);
/// apply_surface( 0, 0, message, screen );
//SDL_Flip( screen );
//SDL_UpdateWindowSurface(window);

    return true;
}

//==============================================================================
