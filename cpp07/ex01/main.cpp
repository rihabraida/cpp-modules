
#include "iter.h"

int main() {
   
    std::cout << "Testing with integers:\n";
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "Original int array: ";
    iter(intArray, intLength, print<int>);
    std::cout << std::endl;
    
    iter(intArray, intLength, doubleValue<int>);
    
    std::cout << "After doubling: ";
    iter(intArray, intLength, print<int>);
    std::cout << std::endl;





    std::cout << "\nTesting with strings:\n";
    std::string stringArray[] = {"hello", "world", "this", "is", "cpp"};
    size_t stringLength = sizeof(stringArray) / sizeof(stringArray[0]);
    
    std::cout << "Original string array: ";
    iter(stringArray, stringLength, print<std::string>);
    std::cout << std::endl;
    
    iter(stringArray, stringLength, toUpper);
    
    std::cout << "After converting to uppercase: ";
    iter(stringArray, stringLength, print<std::string>);
    std::cout << std::endl;



}