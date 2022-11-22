#include <iostream> 

int main()
{
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    int z;
    std::cin >> z;
    if( (x * x + y * y == z * z) || (x * x + z * z == y * y) || (z * z + y * y == x * x))
        std::cout << "YES";
    else if ((x + y <= z) || (x + z <= y) || (z + y <= x))
        std::cout << "UNDEFINED";
    else
        std::cout << "NO";
    return 0;
}