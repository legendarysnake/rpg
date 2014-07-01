//==============================================================================
#include "CApp.h"
#include "SDL2/SDL_image.h"
#include <string>
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

    if(Player.OnLoad("./assets/classes/pirate_f.png", 32, 48, 0, Surf_Display) == false) {
	
	printf("Failed to Load Character Image"); 
    	return false;
    }
if(TTF_Init()==-1) {
   fprintf(stderr, "Error: unable to initialize TTF_SDL, %s\n", TTF_GetError());
   return false;
 }

 //   if(Weapon.OnLoad("./assets/Icebrand.png", 25,25, 8, Surf_Display) == false) {
//printf("failed to Load Icebrand"); 
 //   	return false;
 //   }

txtHP.OnLoad("level 1 HP: 40/40","./Anonymous.ttf",10,0,0,0,255,0);
txtHP.PrintText(Surf_Display);

   CEntity::EntityList.push_back(&Player);
CFontBank::TextList.push_back(&txtHP);


	CCamera::CameraControl.TargetMode = TARGET_MODE_CENTER;
    CCamera::CameraControl.SetTarget(&Player.X, &Player.Y);

    return true;
}

//==============================================================================
