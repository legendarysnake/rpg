//=============================================================================
//=============================================================================
#ifndef _CNPC_H_
#define _CNPC_H_

#include "CEntity.h"

//=============================================================================
class CNPC : public CEntity {
    public:
        CNPC();
	

bool Atack;

bool OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainDispaly);

        void OnLoop();

        void OnRender(SDL_Renderer * Surf_Display);

        void OnCleanup();

        void OnAnimate();

        bool OnCollision(CEntity* Entity);
	bool Atacking();
};

//=============================================================================

#endif
