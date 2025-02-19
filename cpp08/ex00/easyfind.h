#ifndef iter_H
# define iter_H


#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
typename T::iterator   easyfind(T &container, int occ){
    typename T::iterator it;
    for(it = container.begin(); it != container.end(); ++it){
        if(*it == occ)
            return(it);
    }
    throw std::runtime_error("Value not found in container");
}

#endif