#include "Serializer.hpp"
#include <cstdlib>
int main()
{
    Data *ptr = (Data *)malloc(sizeof(Data));
    ptr->age = 10;
    ptr->name = "koko";
    uintptr_t addr ;
    std::cout << ptr << std::endl;

    addr=Serializer::serialize(ptr);
   
    std::cout <<  Serializer::deserialize(addr) << std::endl;

}