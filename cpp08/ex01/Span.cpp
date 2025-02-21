#include "Span.h"




Span::Span():N(0){

}

Span::Span(unsigned int n):N(n){
    
}

Span::Span(const Span &other){

}

Span & Span::operator=(const Span &other)
{

}
void Span::addNumber(unsigned int num){

    if(v.size() == N)
        throw std::exception();
    else
        v.push_back(num);
    
}
void Span::shortestSpan(){
    std::vector<unsigned int>::iterator first_min = std::min_element(v.begin(), v.end());
    
    v.erase(first_min);

     std::vector<unsigned int>::iterator _min = std::min_element(v.begin(), v.end());


}
void Span::longestSpan(){
    std::vector<unsigned int>::iterator min_it = std::min_element(v.begin(), v.end());
    std::vector<unsigned int>::iterator max_it = std::max_element(v.begin(), v.end());
    
}
void Span::addRangeNumbers(){}
Span::~Span(){}
