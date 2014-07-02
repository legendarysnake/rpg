//=============================================================================
#include "CNPC.h"
#include "CApp.h"
//=============================================================================
CNPC::CNPC() {
}

//=============================================================================
bool CNPC::OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainDispaly) {
    if(CEntity::OnLoad(File, Width, Height, MaxFrames, MainDispaly) == false) {
        return false;
    }

    return true;
}

//-----------------------------------------------------------------------------
void CNPC::OnLoop()
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
void CNPC::OnRender(SDL_Renderer* Surf_Display) {
CEntity::OnRender(Surf_Display);
}

//------------------------------------------------------------------------------
void CNPC::OnCleanup() {
CEntity::OnCleanup();
}

//------------------------------------------------------------------------------
void CNPC::OnAnimate() {
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
bool CNPC::OnCollision(CEntity* Entity)
{


    return true;

}
bool CNPC::Atacking()
{





}
//=========================================================
