#include <iostream>
#include "mylog.h"


MyLog::MyLog()
{
    this->errorLevel = Level::LOG_DEBUG;
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->name = "a";
};

MyLog::MyLog(Level level)
{
    this->errorLevel = level;
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->name = "";
};

// MyLog::~MyLog()
// {
//     std::cout << "MyLog ended" << std::endl;
// };

void MyLog::SetLevel(Level level)
{
    this->errorLevel = level;
}

MyLog::Level MyLog::GetLevel()
{
    return errorLevel;
}

void MyLog::print()
{
    std::cout << "Name:" << this->name << " x:" << this->x << " y:" << this->y << " level:" << this->errorLevel << std::endl;
}
