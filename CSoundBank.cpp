#include <base/Common.h>

#include "CSoundBank.h"

CSoundBank CSoundBank::SoundControl;

CSoundBank::CSoundBank()
{
}

int CSoundBank::OnLoad(const char* File)
{
    Mix_Chunk* TempSound = NULL;

    char TempFile[128];

    sprintf(TempFile,"%s%s", DATA_DIR, File);

    if((TempSound = Mix_LoadWAV(TempFile)) == NULL)
    {
        Logger::LoggerControl.DbgMsg("Error","Failed to load sound file : %s",TempFile);
        return -1;
    }

    SoundList.push_back(TempSound);

    return (SoundList.size() - 1);
}

void CSoundBank::OnCleanup()
{
    for(unsigned int i = 0; i < SoundList.size(); i++)
    {
        Mix_FreeChunk(SoundList[i]);
    }

    SoundList.clear();
}

void CSoundBank::Play(unsigned int ID)
{
    if(ID < 0 || ID >= SoundList.size()) return;
    if(SoundList[ID] == NULL) return;

    Mix_PlayChannel(-1, SoundList[ID], 0);
}

