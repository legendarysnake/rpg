//=============================================================================
//=============================================================================
#ifndef _CENEMY_H_
#define _CENEMY_H_

#include "CEntity.h"

//=============================================================================
class CEnemy : public CEntity {
    public:
        CEnemy();
	

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
