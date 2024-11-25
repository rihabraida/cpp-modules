
#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable:  " << &str <<std::endl;
    std::cout << "The memory address held by stringPTR:  " << stringPTR <<std::endl ;   
    std::cout << "The memory address held by stringREF:  " << &stringREF <<std::endl; 

    std::cout << "The value of the string variable:  " << str <<std::endl;
    std::cout << "The value pointed to by stringPTR:  " << *stringPTR <<std::endl;
    std::cout << "The value pointed to by stringREF:  " << stringREF <<std::endl;

}

// int main()
// {
//     int a =10;
//     int b =20;

//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     int& ref = a;
//     ref = b;
//     // ref++;
//     std::cout << &a << std::endl;
//     std::cout << &b << std::endl;
//     std::cout << &ref << std::endl;
//     std::cout << a << std::endl;
// }