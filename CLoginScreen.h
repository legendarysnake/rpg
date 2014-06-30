//==============================================================================
#ifndef _CLOGINSCREEN_H_
#define _CLOGINSCREEN_H_

#include <vector>

#include "CArea.h"
#include "CAnimation.h"
#include "CCamera.h"
#include "CFPS.h"
#include "CSurface.h"

#include "CLoginScreen.h"
//==============================================================================


//==============================================================================


//==============================================================================
class CLoginScreen {
	public:
CLoginScreen();
 static CLoginScreen            LOADIMAGE;
virtual ~CLoginScreen();
		float	X;
		float	Y;
		//bool    Jump();

	

		

		

	
		virtual bool OnLoad(char* File, int Width, int Height, int MaxFrames, SDL_Renderer* MainRenderer );


		

		virtual void OnRender(SDL_Renderer* Surf_Display);

};

//==============================================================================


//==============================================================================

#endif
