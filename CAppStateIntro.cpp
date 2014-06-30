#include "CAppStateIntro.h"
 
#include "CAppStateManager.h"
 
CAppStateIntro CAppStateIntro::Instance;

CAppStateIntro::CAppStateIntro() {
    Surf_Button = NULL;
	Surf_ButtonAct = NULL;
}
 
void CAppStateIntro::OnLButtonDown(int mX, int mY) {
	if(mX > 185 && mX < 477 && mY > 134 && mY < 340)
	{
	ButtonAct = true;
	}
}
void CAppStateIntro::OnLButtonUp(int mX, int mY) {
	ButtonAct = false;
	if(mX > 185 && mX < 477 && mY > 134 && mY < 340)
	{
	CAppStateManager::SetActiveAppState(APPSTATE_GAME);
	}
}

void CAppStateIntro::OnActivate() {
    // Load Simple Logo
    Surf_Button = CSurface::OnLoad("ButtonDe.png");
	Surf_ButtonAct = CSurface::OnLoad("ButtonAct.png");
	ButtonAct = false;
}
 
void CAppStateIntro::OnDeactivate() {
    if(Surf_Button) {
        SDL_FreeSurface(Surf_Button);
        Surf_Button = NULL;
    }
	if(Surf_ButtonAct) {
		SDL_FreeSurface(Surf_ButtonAct);
        Surf_Button = NULL;
	}
}
 
void CAppStateIntro::OnLoop() {

}
 
void CAppStateIntro::OnRender(SDL_Surface* Surf_Display) {
    if(Surf_Button) {
        CSurface::OnDraw(Surf_Display, Surf_Button, 0, 0);
    }
	if(ButtonAct == true) {
		CSurface::OnDraw(Surf_Display, Surf_ButtonAct, 0, 0);
	}
}
 
CAppStateIntro* CAppStateIntro::GetInstance() {
    return &Instance;
}
