#ifndef template_H
# define template_H


#include <iostream>
#include <string>

template <typename T>
T max(T x,T y)
 {  
   if(x < y)
      return(y);
   return(x);
 }

template <typename T>
T min(T x,T y)
 {   
   if(x < y)
      return(x);
   return(y);
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