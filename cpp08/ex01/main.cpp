#include "Span.h"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main() {
//     try {
//         Span sp(10000);
//         std::vector<int> Numbers;
//         srand(time(NULL));
        
//         for (int i = 0; i < 10000; ++i) {
//             Numbers.push_back(std::rand()); 
//         }
        
//         sp.addRangeNumbers(Numbers.begin(), Numbers.end());
//         std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//         std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
    
    
//     return 0;
// }