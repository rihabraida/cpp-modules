
#ifndef MutantStack_H
# define MutantStack_H


#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <bits/stdc++.h>


template <typename T>

class MutantStack{

    std::vector<T> container;
public:

    MutantStack();

    bool empty() const{
        if(!container.size())
            return(true);
        return(false);
    }
    void push(const T& value){
        container.push_back(value);
    }
    void pop(){
        container.pop_back();
    }

    T&   top() const{
        return(container.back());
    }
    unsigned int size(){
        return(container.size())
    }
    MutantStack<T>::iterator   begin(){
        return (container.begin());
    }
    MutantStack<T>::iterator   end(){
        return (container.end());
    }
    
};


#endif