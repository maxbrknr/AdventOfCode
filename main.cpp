#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string input;

    std::cout << "Enter smth" << std::endl << ">>";
    std::getline(std::cin, input);

    std::cout << "Your entry was: " << input;
    return 0;
}