#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int num1, num2;
    std::cout << "������� �������� 1";
    std::cin >> num1;
    std::cout << "������� �������� 2";
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << "�������� 1 > �������� 2";
    }
    else(num2 > num1) {
        std::cout << "�������� 2 > �������� 1";
    }
    return 0;

}