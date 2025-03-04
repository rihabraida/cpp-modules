#include "Span.h"
int main() {
    try {
        Span sp(10000);
        srand(time(NULL));
        
        for (int i = 0; i < 10000; ++i) {
            sp.addNumber(rand() % 100000); 
        }
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    
    return 0;
}