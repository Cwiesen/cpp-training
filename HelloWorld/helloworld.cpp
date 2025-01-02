#include <iostream>

int main()
{
    std::cout << "Enter 3 numbers separated by whitespace ";

    int x{}, y{}, z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}
