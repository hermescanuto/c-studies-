#include <iostream>
#include "mylog.hpp"

void start()
{
    MyLog mylog;

    mylog.x = 1;
    mylog.y = 2;

    mylog.print();
    std::cout << "Level:" << mylog.GetLevel() << std::endl;
}

int main()
{
    std::cout << "Main starts" << std::endl;
    start();
    return 0;
}
