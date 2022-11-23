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

//Шахматный ферзь ходит по диагонали, горизонтали или вертикали. 
//Даны две различные клетки на шахматной доске без фигур. 
//Определите, может ли ферзь попасть с первой клетки на вторую одним ходом