#include "Base.h"


int main() {
    
    for (int i = 0; i < 5; i++) {
        Base* ptr = generate();
        
        std::cout << "Test " << i + 1 << ":" << std::endl;
        std::cout << "Pointer identification: ";
        identify(ptr);
        
        std::cout << "Reference identification: ";
        identify(*ptr);
        
        std::cout << std::endl;
        
        delete ptr;  
    }
    
    return 0;
}