#pragma once
#include <iostream>
#include <string>


class MyLog
{
    public:
    int x, y, z;
    std::string name;  
    enum Level
    {
        LOG_ERROR = 0,
        LOG_WARN,
        LOG_INFO,
        LOG_DEBUG
    };

    private:
        Level errorLevel;

    public:
        MyLog();
        MyLog(Level l);
        // ~MyLog();
        void SetLevel(Level level);
        void print();
        Level GetLevel();
};