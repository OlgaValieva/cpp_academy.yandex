//Напечатайте месяц из календаря по заданному начальному дню и количеству дней.
#include <iostream> 

int main()
{
    int n; // номер дня недели первого числа месяца а (целое число от 1 до 7)
    int k; //количество дней в этом месяце (целое число от 1 до 99)
    std::cin >> n >> k; 
    
    for (int i = 1; i < n; i++)
    {
        std::cout << "   ";
    }

    int dayWeek = n;

    for (int data = 1; data <=  k; data++)
    {
        if (data < 10)
        {
            std::cout << " ";
        }
        std::cout << data;
        
        if (dayWeek == 7)
        {
            std::cout << "\n";
            dayWeek = 1;
        }
        else
        {
            std::cout << " ";
            dayWeek++;
        }
    }
    if (dayWeek > 1)
    {
        std::cout << "\n";
    }
    return 0;
}