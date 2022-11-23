//Вычислите сумму цифр неотрицательного целого числа.
#include <iostream> 

int main()
{
    long long n;   
    std::cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    std::cout << sum;
    return 0;
}