#include "Array.h"

template <typename T> Array<T>::Array(): ptr(NULL),n(0){}

template <typename T> Array<T>::Array(int n):n(n){
    if (n > 0) {
        ptr = new T[n](); 
    } else {
        ptr = NULL;
    }
}

template <typename T>unsigned int  Array<T>::size() const {
    return n;
}


