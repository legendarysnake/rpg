#include <iostream>
#include <cstdio>
#include <ctime>

#include "Common.h"

#include "Logger.h"

Logger Logger::LoggerControl;

Logger::Logger()
{

}

void Logger::DbgMsg(const char *sys, const char *fmt, ...)
{
#ifdef WII
#else
    time_t rawtime;
    struct tm * timeinfo;
    char curTime[9];

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    strftime (curTime,9,"%H:%M:%S",timeinfo);

    va_list args;

    fprintf(stdout,"[%s][%s]: ",curTime,sys);

    va_start(args,fmt);
    vfprintf (stdout, fmt, args );

    va_end(args);

    fprintf(stdout,"\n");
#endif
}

