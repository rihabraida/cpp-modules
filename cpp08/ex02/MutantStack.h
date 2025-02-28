
#ifndef MutantStack_H
# define MutantStack_H


#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <stack>
#include <bits/stdc++.h>


template <typename T>

class MutantStack{

    std::vector<T> container;
public:

    MutantStack(){
      
    }
    MutantStack(const MutantStack& other) : container(other.container) {}
    ~MutantStack(){}
    MutantStack& operator=( const MutantStack& other )
    {
        if(this != &other)
            this->container = other.container;
        return(*this);
    }
    bool operator==( const MutantStack& other ){
        return(container == other.container);
    }
    bool operator!=( const MutantStack& other ){
        return(container != other.container);
    } 
    bool operator<( const MutantStack& other ){
        return(container < other.container);
    }
    bool operator<=( const MutantStack& other ){
        return(container <= other.container);
    }
    bool operator>( const MutantStack& other ){
        return(container > other.container);
    }
    bool operator>=( const MutantStack& other ){
        return(container >= other.container);
    }
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

    const T&   top() const{
        return(container.back());
    }
    unsigned int size()const{
        return(container.size());
    }
   
    class iterator{
       typename std::vector<T>::iterator it;
    public:
            iterator(typename std::vector<T>::iterator itr): it(itr){}
            iterator& operator++(){
                ++it;
                return(*this);
           } 
           iterator& operator--(){
                --it;
                return(*this);
           } 
           iterator operator++(int){
                it++;
                return(*this);
           }
            iterator operator--(int){
                it--;
                return(*this);
           }
           int& operator*(){
                return *it;
           }
           bool operator!=(const iterator& other) const {  
                return it != other.it;
            }
            bool operator==(const iterator& other) const {  
                return it == other.it;
            }
    };

    iterator   begin(){
        return (iterator(container.begin()));
    }
    
    iterator  end(){
        return (iterator(container.end()));
    }
    
};


#endif