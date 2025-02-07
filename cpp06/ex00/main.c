
#include "ScalarConverter.h"

int main() {
    // Test cases
    ScalarConverter::convert("42");
    std::cout << "\n";
    ScalarConverter::convert("'a'");
    std::cout << "\n";
    ScalarConverter::convert("42.0f");
    std::cout << "\n";
    ScalarConverter::convert("nan");
    std::cout << "\n";
    ScalarConverter::convert("-inf");
    std::cout << "\n";
    ScalarConverter::convert("invalid");
    
    return 0;
}