//==============================================================================
#include "CLoginScreen.h"

//==============================================================================
CLoginScreen CLoginScreen::LOADIMAGE;



//==============================================================================

//==============================================================================
//CLoginScreen::CLoginScreen() {
	//Surf_Entity = NULL;

	//X = 0;
	//Y = 0;

//}

//------------------------------------------------------------------------------
CLoginScreen::~CLoginScreen() {
}

CLoginScreen::CLoginScreen(){
}
//CLoginScreen::~CLoginScreen() {
//}

//==============================================================================
bool CLoginScreen::OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainRenderer ) {
	if((Surf_Entity = CSurface::OnLoad(File, MainRenderer) ) == NULL) {
		return false;
	}

	//CSurface::Transparent(Surf_Entity, 255, 0, 255);

	

	
    return true;
}

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void CLoginScreen::OnRender(SDL_Renderer* Surf_Display) {
    if(Surf_Entity == NULL || Surf_Display == NULL) return;

 
}

