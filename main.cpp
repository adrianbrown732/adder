#include <iostream>
#include <limits>
#include "add.h"

int main()
{
    int inputNum{getUserInput()};
    int doubleNum{doubleInput(inputNum)};
    int tripleNum{tripleInput(inputNum)};
    std::cout << "Your input is: " << inputNum << '\n';
    std::cout << "Double: " << doubleNum << '\n';
    std::cout << "Triple: " << tripleNum << '\n';

    // Wait for input to end program
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
