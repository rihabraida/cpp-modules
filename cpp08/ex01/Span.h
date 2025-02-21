#ifndef span_H
# define span_H

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <bits/stdc++.h>

class Span{

    std::vector<unsigned int> v;
    unsigned int N;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span & operator=(const Span &other);
    void addNumber(unsigned int n);
    void shortestSpan();
    void longestSpan();
    void addRangeNumbers();
    ~Span();

};


#endif