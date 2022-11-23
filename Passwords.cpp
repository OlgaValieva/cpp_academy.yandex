// Пароль от некоторого сервиса должен удовлетворять таким ограничениям:
// состоять из символов таблицы ASCII с кодами от 33 до 126;
// быть не короче 8 символов и не длиннее 14;
// из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.
// Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения.
#include <iostream>
#include <cctype> 
#include <string> 

int main()
{
    int i = 0;
    int upper = 0, lower = 0, digit = 0, symbols = 0;
    std::string str;
    std::getline(std::cin, str);
    if ((str.size() > 8 && str.size() <= 14))
    {
        while (str[i])
        {
            if (isprint(str[i]))
            {
                if (isupper(str[i]))
                    upper = 1;
                else if (islower(str[i]))
                    lower = 1;
                else if (isdigit(str[i]))
                    digit = 1;
                else
                    symbols = 1;    
            }
            i++;
        }
    }
    if (upper + lower + digit + symbols >= 3)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}