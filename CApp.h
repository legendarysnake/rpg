
#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL2/SDL.h>
#include "SDL2/SDL_ttf.h"
#include "Define.h"
#include <iostream>
#include "CFPS.h"

#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 

#include "CArea.h"
#include "CCamera.h"
#include "CEntity.h"
#include "CEvent.h"
#include "CSurface.h"
#include "CWeapon.h"
#include "CPlayer.h"
#include "CFontBank.h"
#include "CEnemy.h"
#include "CNPC.h"
//==============================================================================


   

class CApp : public CEvent {
    private:
        bool            Running;
  SDL_Renderer*    Surf_Display;
        TTF_Font *font;
				
SDL_Surface* title = NULL;
SDL_Surface* loginwindow = NULL;
        CPlayer			Player;
        CPlayer			Player2;
	CEnemy			Enemy;
        CNPC			NPC;
	CWeapon Weapon;
CFontBank txtHP;
CFontBank txtName;
    public:
        CApp();
SDL_Window* window;
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    char buffer[256];
        int OnExecute();

    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);

        	void OnKeyDown(SDL_Keycode sym,  SDL_Keymod mod, Uint16 unicode);

        	void OnKeyUp(SDL_Keycode sym, SDL_Keymod mod, Uint16 unicode);

            void OnExit();

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

//==============================================================================

#endif
