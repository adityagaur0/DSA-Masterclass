#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::string substring = "world";

    // Check if the substring exists in the string
    if (str.find(substring) != std::string::npos) {
        std::cout << "Substring found!" << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}







