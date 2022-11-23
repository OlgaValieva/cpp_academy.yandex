#include <iostream>
#include <cstdint>

int main() {
    uint64_t n;
    std::cin >> n;
    std::cout << (n * (n + 1) / 2) << "\n";
}

//Перед вами программа, которая считает сумму первых nn натуральных чисел по формуле суммы арифметической прогрессии