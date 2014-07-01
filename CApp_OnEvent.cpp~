//==============================================================================
#include "CApp.h"

//==============================================================================
void CApp::OnEvent(SDL_Event* Event) {
    CEvent::OnEvent(Event);
}

//==============================================================================
void CApp::OnKeyDown(SDL_Keycode sym, SDL_Keymod mod, Uint16 unicode) {
	switch(sym) {
		case SDLK_LEFT: {
if (Player.MoveUp ==false && Player.MoveDown==false && Player.MoveRight ==false ){
Player.MoveLeft = true;
}
			
			break;
		}

		case SDLK_RIGHT: {
			if (Player.MoveUp ==false && Player.MoveDown==false && Player.MoveLeft == false){
Player.MoveRight = true;
}
			break;
		}
		case SDLK_UP:{
if (Player.MoveLeft ==false && Player.MoveRight==false && Player.MoveDown == false){
			Player.MoveUp = true;
}
			break;
		}
		case SDLK_DOWN:{
if (Player.MoveLeft ==false && Player.MoveRight==false && Player.MoveUp == false ){
			Player.MoveDown = true;
}
			break;
		}
		case SDLK_SPACE:
		{
           Player.Atack = true;

            break;
		}

		default: {
		}
	}
}

//------------------------------------------------------------------------------
void CApp::OnKeyUp(SDL_Keycode sym, SDL_Keymod mod, Uint16 unicode) {
	switch(sym) {
		case SDLK_LEFT: {
			Player.MoveLeft = false;
			break;
		}

		case SDLK_RIGHT: {
			Player.MoveRight = false;
			break;
		}
                case SDLK_UP: {
			Player.MoveUp = false;
			break;
		}
                case SDLK_DOWN: {
			Player.MoveDown = false;
			break;
		}

		default: {
		}
	}
}

//------------------------------------------------------------------------------
void CApp::OnExit() {
	Running = false;
}

//==============================================================================
