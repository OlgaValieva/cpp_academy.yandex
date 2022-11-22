#include <iostream> 

int main()
{
    int y, x;
    std::cin >> y >> x;
    if ((x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) && y == 2)
        std::cout << "29";
    else if (y == 2)
        std::cout << "28";
    else if (y == 4 || y == 6 || y == 9 || y == 11)
        std::cout << "30";
    else
       std::cout << "31";
    return 0;
}