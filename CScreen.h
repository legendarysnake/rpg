//==============================================================================
// Animation Class
//==============================================================================
#ifndef _CSCREEN_H_
    #define _CSCREEN_H_

#include <SDL2/SDL.h>

//==============================================================================
class CScreen {
	private:



	


	public:
        SDL_Surface *load_image( std::string filename )
        void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL )
};

//==============================================================================

#endif
