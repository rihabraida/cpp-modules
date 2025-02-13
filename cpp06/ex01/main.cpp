#include "Serializer.hpp"
#include <cstdlib>
int main()
{
    Data ptr = {10,"koko"};

    uintptr_t addr ;
    std::cout << &ptr << std::endl;

    addr=Serializer::serialize(&ptr);
   
    std::cout <<  Serializer::deserialize(addr) << std::endl;

}