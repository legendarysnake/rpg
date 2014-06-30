#ifndef __CAPPSTATEINTRO_H__
    #define __CAPPSTATEINTRO_H__
 
#include "CAppState.h"
#include "CSurface.h"
 
class CAppStateIntro : public CAppState {
    private:
        static CAppStateIntro Instance;
 
        SDL_Surface* Surf_Button;
		SDL_Surface* Surf_ButtonAct;
 
    private:
        CAppStateIntro();

	private:
		bool ButtonAct;

	public: 
		void OnLButtonDown(int mX, int mY);
		void OnLButtonUp(int mX, int mY);
 
    public:
        void OnActivate();
 
        void OnDeactivate();
 
        void OnLoop();
 
        void OnRender(SDL_Surface* Surf_Display);
 
    public:
        static CAppStateIntro* GetInstance();
};
 
#endif
