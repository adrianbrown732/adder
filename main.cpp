#include <iostream>
#include <limits>

int main()
{
    std::cout << "Bonjour!\n";

    // Wait for input to end program
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
