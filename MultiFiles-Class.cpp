#include <iostream>
#include <string>
#include <Windows.h>
#include "sCounter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Counter* Count = nullptr;
    std::string answer = "";

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

    std::cin >> answer;
    if (answer == "да" || answer == "Да" || answer == "ДА")
    {
        int userDigit;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> userDigit;
        Count = new Counter(userDigit);
    }
    else
        Count = new Counter();

    system("cls");

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> answer;

        if (answer == "+")
            Count->add();
        else if (answer == "-")
            Count->subtract();
        else if (answer == "=")
            std::cout << Count->get_value() << std::endl;

    } while (answer != "x" && answer != "X" && answer != "х" && answer != "Х");

    delete Count;
}
