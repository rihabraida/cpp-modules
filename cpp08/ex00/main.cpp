#include "easyfind.h"
#include <vector>
#include <list>
#include <iterator> 
int main() {

      int arr[] = {1, 2, 3, 4, 5};
     std::vector<int> vec(arr, arr + 5);
    try {
        std::vector<int>::iterator result = easyfind(vec, 1);
        std::cout << "Found value in vector at position: " 
                  << *result << std::endl;
        
        result = easyfind(vec, 10);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // Test with list
    // std::list<int> list = {10, 20, 30, 40, 50};
    // try {
    //     auto result = easyfind(list, 30);
    //     std::cout << "Found value in list at position: " 
    //               << std::distance(list.begin(), result) << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception caught: " << e.what() << std::endl;
    // }

      return 0;
}