#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int userValue{};
    std::cin >> userValue;

    std::cout << "Double that number is: " << userValue * 2 << '\n';

    return 0;
}
