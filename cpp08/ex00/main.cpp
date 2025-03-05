#include "easyfind.h"
#include <vector>
#include <list>
#include <iterator> 
int main() {

    
    std::vector<int> v;
    v.push_back(11);
    v.push_back(23);
    v.push_back(45);
    v.push_back(89);
    try {
        std::vector<int>::iterator result = easyfind(v, 23);
        std::cout << "Found value in vector at position: " 
                  <<std::distance(v.begin(), result) << std::endl;
        
        result = easyfind(v, 10);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::list<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    try {
        std::list<int>::iterator result = easyfind(list, 30);
        std::cout << "Found value in list at position: " 
                  << std::distance(list.begin(), result) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
      return 0;
}