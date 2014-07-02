//=============================================================================
#include "CEnemy.h"
#include "CApp.h"
//=============================================================================
CEnemy::CEnemy() {
}

//=============================================================================
bool CEnemy::OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainDispaly) {
    if(CEntity::OnLoad(File, Width, Height, MaxFrames, MainDispaly) == false) {
        return false;
    }

    return true;
}

//-----------------------------------------------------------------------------
void CEnemy::OnLoop()
{

/* Rotation Test
if(rotation >= 360)
{
rotation = 0;
}
else
{

rotation += 0.5;
}
*/

CEntity::OnLoop();
}

//-----------------------------------------------------------------------------
void CEnemy::OnRender(SDL_Renderer* Surf_Display) {
CEntity::OnRender(Surf_Display);
}

//------------------------------------------------------------------------------
void CEnemy::OnCleanup() {
CEntity::OnCleanup();
}

//------------------------------------------------------------------------------
void CEnemy::OnAnimate() {
if(SpeedX != 0 ) {
Anim_Control.MaxFrames = 5;
}else
if(SpeedY != 0 ) {
Anim_Control.MaxFrames = 5;
}else
if(SpeedX == 0 && SpeedY == 0) 
{
Anim_Control.MaxFrames = 0;
}

CEntity::OnAnimate();
}

//------------------------------------------------------------------------------
bool CEnemy::OnCollision(CEntity* Entity)
{
    Jump();

    return true;

}
bool CEnemy::Atacking()
{





}
//=========================================================
