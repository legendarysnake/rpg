#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <math.h>

#include "Logger.h"
#include "Define.h"

typedef struct
{
    float x;
    float y;
}point;

inline double dist(point a, point b)
{
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

#endif // COMMON_H_INCLUDED

