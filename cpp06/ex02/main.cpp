#include "Base.h"


int main() {
    
        Base* ptr = generate();
        
        std::cout << "Test "  << ":" << std::endl;
        std::cout << "Pointer identification: ";
        identify(ptr);
        
        std::cout << "Reference identification: ";
        identify(*ptr);
        
        std::cout << std::endl;
        delete ptr;

    
    return 0;
}