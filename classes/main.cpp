#include <iostream>



int main()
{
    LOG log;

    log.x = 1;
    log.y = 2;

    log.print();

    std::cout << "Main starts" << std::endl;
    std::cout << log.GetLevel() << std::endl;

    return 0;
}
