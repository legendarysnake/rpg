#ifndef LOGGER_H_INCLUDED
#define LOGGER_H_INCLUDED

#include <cstdarg>

class Logger
{
public:
    static Logger LoggerControl;

    Logger();
    void DbgMsg(const char *sys, const char *fmt, ...);
};

#endif // LOGGER_H_INCLUDED

