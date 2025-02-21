
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
        Array(): ptr(NULL),n(0){}
        Array(unsigned int n):n(n){
            if (n > 0) {
                ptr = new T[n](); 
            } else {
                ptr = NULL;
            }
        }

        Array(const Array<T> &obj):n(obj.n){
            if(n > 0)
            {    ptr = new T[n];

                for(unsigned int i = 0;i < n; i++)
                    ptr[i] = obj.ptr[i];
              }  
            else
                ptr = NULL;
        }

        Array<T>& operator=(const Array<T> &other){
            if(this != &other)
            {
                delete [] ptr;
                n = other.n;
                if(n > 0)
                {    ptr = new T[n];
                    for(unsigned int i = 0;i < n; i++)
                        ptr[i] = other.ptr[i];
                }
                else
                    ptr = NULL;
            }
            return(*this);
        }


        T& operator[](unsigned int index){
            if(index >= n)
                throw std::exception();
            return(ptr[index]);
        }
        const T& operator[](unsigned int index) const {
        if (n >= _size) {
            throw std::exception();
        }
        return ptr[index];
        }

        
        unsigned int size() const{
            return(n);
        }
        ~Array(){
            delete [] ptr;
        }
    };


#endif