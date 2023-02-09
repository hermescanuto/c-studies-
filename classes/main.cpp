#include <iostream>
#include "mylog.h"

void start()
{
    MyLog mylog;

    mylog.x = 1;
    mylog.y = 2;
    mylog.name = "First";

    MyLog m( MyLog::LOG_ERROR  );

    m.x = 10;
    m.y = 20;
    m.name = "Second";

    mylog.print();
    m.print();
}

int main()
{
    std::cout << "Main starts" << std::endl;
    start();
    return 0;
}
