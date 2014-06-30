#ifndef CSOUNDBANK_H_INCLUDED
#define CSOUNDBANK_H_INCLUDED

#include <SDL/SDL_mixer.h>
#include <vector>

class CSoundBank
{
public:
    static CSoundBank SoundControl;

    std::vector<Mix_Chunk*> SoundList;

public:
    CSoundBank();

    int OnLoad(const char* File);

    void OnCleanup();

    void Play(unsigned int ID);
};

#endif // CSOUNDBANK_H_INCLUDED

