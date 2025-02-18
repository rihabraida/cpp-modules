#ifndef iter_H
# define iter_H


#include <iostream>
#include <string>

template<typename T, typename F>
void iter(T* array, size_t length, F function)
{
    for(size_t i = 0; i < length; i++)
    {
        function(array[i]);
    }
}


template<typename T>
void print(T const& x) {
    std::cout << x << " ";
}

template<typename T>
void doubleValue(T& x) {
    x *= 2;
}

void toUpper(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}






#endif