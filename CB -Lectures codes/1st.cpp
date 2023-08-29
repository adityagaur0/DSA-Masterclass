#include <iostream>

int main() {
    int number = 2635;
    
    int evenDigits = 0;
    int oddDigits = 0;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            evenDigits = evenDigits * 10 + digit;
        } else {
            oddDigits = oddDigits * 10 + digit;
        }
        number /= 10;
    }
    
    std::cout << "Even digits: " << evenDigits << std::endl;
    std::cout << "Odd digits: " << oddDigits << std::endl;
    
    return 0;
}
