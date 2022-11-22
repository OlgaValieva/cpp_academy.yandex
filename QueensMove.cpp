#include <iostream> 

int main()
{
    int x1;
    std::cin >> x1;
    int y1;
    std::cin >> y1;
    int x2;
    std::cin >> x2;
    int y2;
    std::cin >> y2;
    if (x1 == x2 || y1 == y2 || (abs(x1 - x2) == abs(y1 - y2)))
        std::cout << "YES";
    else 
        std::cout << "NO";
    return 0;
}