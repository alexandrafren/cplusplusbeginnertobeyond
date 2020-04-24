#include <iostream>

int main() {
    int favorite_number;

    std::cout << "What's your favorite number?";

    std::cin >> favorite_number;

    std::cout << "Woah! That's my favorite number too!" << std::endl;

    std::cout << "No really! " << favorite_number << " is my favorite number!";

    return 0;
}