#include <iostream>
#include "add.h"

int getUserInput()
{
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;
    return input;
}

int doubleInput(int x)
{
    return x * 2;
}

int tripleInput(int x)
{
    return x * 3;
}
