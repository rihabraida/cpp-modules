#ifndef Serializer_H
# define Serializer_H

#include <inttypes.h>
#include <iostream>
#include <string>

struct  Data{

    int age;
    std::string name;

};

class Serializer{

public:
        Serializer();
        Serializer(const Serializer &other);
        Serializer & operator=(const Serializer &obj);
        static   uintptr_t serialize(Data* ptr);
        static   Data* deserialize(uintptr_t raw);
        ~Serializer();

};

#endif