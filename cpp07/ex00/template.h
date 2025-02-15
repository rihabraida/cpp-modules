#ifndef template_H
# define template_H


#include <iostream>
#include <string>

template <typename T>
T max(T x,T y)
 {   
    return(x < y) ? y : x;
 }

template <typename T>
T min(T x,T y)
 {   
    return(x < y) ? x : y;
 }

template <typename T>
void   swap(T &x, T &y)
{
    T   a;
    a = x;
    x = y;
    y = a;
    
}
#endif