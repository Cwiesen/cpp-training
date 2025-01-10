#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: ";
    int userInput{};
    std::cin >> userInput;
    return userInput;
}

void writeAnswer(int answer)
{
    std::cout << "Your sum is: " << answer << ".\n";
}
