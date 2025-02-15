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
private:
    Serializer();
    Serializer(const Serializer &other);
    Serializer & operator=(const Serializer &obj);
    ~Serializer();
public:
        static   uintptr_t serialize(Data* ptr);
        static   Data* deserialize(uintptr_t raw);
};

#endif