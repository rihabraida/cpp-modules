
#ifndef Array_H
# define Array_H


#include <iostream>
#include <string>

template <typename T> class Array {
    private:
        T* ptr;
        unsigned int n;
    
    public:
        Array();
        Array(int n);
        Array(const Array &obj);
        unsigned int size() const;
    };


#endif