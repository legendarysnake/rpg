//=============================================================================
#include "CWeapon.h"
#include "CApp.h"
//=============================================================================
CWeapon::CWeapon() {
}

//=============================================================================
bool CWeapon::OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainDispaly) {
    if(CEntity::OnLoad(File, Width, Height, MaxFrames, MainDispaly) == false) {
        return false;
    }

    return true;
}

//-----------------------------------------------------------------------------
void CWeapon::OnLoop()
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
void CWeapon::OnRender(SDL_Renderer* Surf_Display) {
CEntity::OnRender(Surf_Display);
}

//------------------------------------------------------------------------------
void CWeapon::OnCleanup() {
CEntity::OnCleanup();
}

//------------------------------------------------------------------------------
void CWeapon::OnAnimate() {
if(SpeedX != 0) {
Anim_Control.MaxFrames = 2;
}else{
Anim_Control.MaxFrames = 0;
}

CEntity::OnAnimate();
}

//------------------------------------------------------------------------------
bool CWeapon::OnCollision(CEntity* Entity)
{
    //Jump();

    return true;

}//=========================================================
