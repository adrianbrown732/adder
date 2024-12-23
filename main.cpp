#include <iostream>
#include <limits>

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

int main()
{
    int test{tripleInput(getUserInput())};
    std::cout << test << '\n';

    // Wait for input to end program
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
