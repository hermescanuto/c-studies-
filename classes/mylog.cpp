#include <iostream>

class LOG
{

public:
    int x, y;
    enum Level
    {
        LOG_ERROR = 0,
        LOG_WARN,
        LOG_INFO,
        LOG_DEBUG
    };

    Level errorLevel;

    LOG(Level level = LOG_INFO)
    {
        this->errorLevel = level;
        this->x=0;
        this->y=0;
    };

    void SetLevel(Level level)
    {
        errorLevel = level;
    }

    Level GetLevel()
    {
        return errorLevel;
    }

    void print()
    {
        std::cout << x << " " << y << std::endl;
    }
};