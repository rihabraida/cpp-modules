#include "Serializer.hpp"


Serializer::Serializer() {}

Serializer::Serializer(const Serializer &obj) {
    (void)obj;
}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer &obj) {
    (void)obj;
    return(*this);
}

uintptr_t Serializer::serialize(Data* ptr){


      uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
      return(addr);
}

 Data* Serializer::deserialize(uintptr_t raw){
    
    Data* ptr = reinterpret_cast<Data*>(raw);
    return(ptr);
 }