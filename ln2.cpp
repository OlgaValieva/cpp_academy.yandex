// Значение натурального логарифма ln2
#include <iostream> 

int main()
{
    int n;   
    std::cin >> n;
    double sum = 0.0;
    double sign = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + sign / i;
        sign = sign * (-1);
    }
    std::cout << sum;
    return 0;
}