#include "Span.h"




Span::Span():N(0){

}

Span::Span(unsigned int n):N(n){
    v.reserve(N);
}

Span::Span(const Span &other){

}

Span & Span::operator=(const Span &other)
{

}
void Span::addNumber(unsigned int num){

    if(v.size() >= N)
        throw std::exception();
    v.push_back(num);
    
}
unsigned int Span::shortestSpan(){
        if (v.size() <= 1) {
            throw std::runtime_error("Not enough numbers to find span");
        }
        std::vector<int> sorted = v;
        std::sort(sorted.begin(),sorted.end());

        unsigned int min = sorted[1] - sorted[0];
        for(int i = 1 ; i < sorted.size(); i++)
        {
            unsigned int diff = sorted[i] - sorted[i + 1];
            min = std::min(diff, min);
        }
        return(min);
}
unsigned int  Span::longestSpan(){

    if (v.size() <= 1) {
            throw std::runtime_error("Not enough numbers to find span");
    }
    int min_it = *std::min_element(v.begin(), v.end());
    int max_it = *std::max_element(v.begin(), v.end());
    
    return (max_it - min_it);
}

size_t Span::size() const {
        return v.size();
    }

Span::~Span(){}
