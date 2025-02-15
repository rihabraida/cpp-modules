
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base::Base() {}

Base::~Base(){}


Base* generate(void) {

    srand(time(0));
    int choice = rand() % 3;
    if (choice == 0) return new A();
    if (choice == 1) return new B();
    return new C();
}



void identify(Base* p){

    if(dynamic_cast<A*>(p))
        std::cout << "Object of type A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "Object of type B" << std::endl; 
    else if(dynamic_cast<C*>(p)) 
        std::cout << "Object of type C" << std::endl;
}


void identify(Base& p){

    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Object of type A" << std::endl;
        return(void)a;
    } catch (std::exception& bc) {}
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "Object of type B" << std::endl;
        return(void)b;
    } catch (std::exception& bc) {}

    try {
        C& c= dynamic_cast<C&>(p);
        std::cout << "Object of type C" << std::endl;
        return(void)c;
    } catch (std::exception& bc) {}
    
}