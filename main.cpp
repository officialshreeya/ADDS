#include <iostream>
#include "Reverser.h"

int main() {
    Reverse r;
    std::cout << "rDigit(12345): " << r.reverseDigit(12345) << std::endl;  
    std::cout << "rneg(-10): " << r.reverseDigit(-10) << std::endl;      
    std::cout << "rString(\"hello\"): " << r.reverseString("hello") << std::endl;  
    std::cout << "rnull(\"null\"): " << r.reverseString("null") << std::endl;   

    return 0;
}

