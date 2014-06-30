//=============================================================================
//=============================================================================
#ifndef _CWEAPON_H_
#define _CWEAPON_H_

#include "CEntity.h"

//=============================================================================
class CWeapon : public CEntity {
    public:
        CWeapon();

bool OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainDispaly);

        void OnLoop();

        void OnRender(SDL_Renderer * Surf_Display);

        void OnCleanup();

        void OnAnimate();

        bool OnCollision(CEntity* Entity);
};

//=============================================================================

#endif
