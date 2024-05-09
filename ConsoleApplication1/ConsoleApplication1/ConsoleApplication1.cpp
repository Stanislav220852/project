#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int num1, num2;
    std::cout << "Введите значение 1";
    std::cin >> num1;
    std::cout << "Введите значение 2";
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << "Значение 1 > значения 2";
    }
    else(num2 > num1) {
        std::cout << "Значение 2 > значения 1";
    }
    return 0;

}