#ifndef span_H
# define span_H

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <bits/stdc++.h>

class Span{

    std::vector< int> v;
    unsigned int N;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span & operator=(const Span &other);
    void addNumber(unsigned int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    template <typename T> 
    void addRangeNumbers(T begin,T end){
        int distance = std::distance(begin, end);
        if(v.size() + distance > N)
            throw std::exception();
        v.insert(v.end(), begin,end);
    }
    size_t size() const ;
    ~Span();

};


#endif