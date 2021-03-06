#ifndef __CAPPSTATEGAME_H__
    #define __CAPPSTATEGAME_H__
 
#include "CAppState.h"
 
#include "CArea.h"
#include "CCamera.h"
#include "CEntity.h"
#include "CSurface.h"
#include "CAppStateManager.h"
 
#include "CPlayer.h"
 
class CAppStateGame : public CAppState {
    private:
        static CAppStateGame Instance;
 
        CPlayer    Player;
        CPlayer    Player2;
 
    private:
        CAppStateGame();
 
    public:
        void OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode);
 
        void OnKeyUp(SDLKey sym, SDLMod mod, Uint16 unicode);
 
    public:
        void OnActivate();
 
        void OnDeactivate();
 
        void OnLoop();
 
        void OnRender(SDL_Surface* Surf_Display);
 
    public:
        static CAppStateGame* GetInstance();
};
 
#endif
