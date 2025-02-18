
#ifndef Array_H
# define Array_H


#include <iostream>
#include <string>
#include <exception>

template <typename T> class Array {
    private:
        T* ptr;
        unsigned int n;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &obj);
        Array<T>& operator=(const Array<T> &other);
        T& operator[](unsigned int index);
        unsigned int size() const;
         ~Array();
    };


template <typename T> Array<T>::Array(): ptr(NULL),n(0){}

template <typename T> Array<T>::Array(unsigned int n):n(n){
    if (n > 0) {
        ptr = new T[n](); 
    } else {
        ptr = NULL;
    }
}

template <typename T>unsigned int  Array<T>::size() const {
    return n;
}

#endif