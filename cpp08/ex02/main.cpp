#include "MutantStack.h"

int main()
{
    std::cout << "===== Testing MutantStack =====" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "Iterating through MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "Standard stack size: " << s.size() << std::endl;
    

    std::cout << "\n=== Testing MutantStack with strings ===" << std::endl;
    MutantStack<std::string> sstack;
    
    sstack.push("Hello");
    sstack.push("1337");
    sstack.push("community!!");
    
    std::cout << "Top element: " << sstack.top() << std::endl;
    std::cout << "Size: " << sstack.size() << std::endl;
    
    std::cout << "Content: ";
    for (MutantStack<std::string>::iterator it = sstack.begin(); it != sstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    sstack.pop();
    std::cout << "After pop, top element: " << sstack.top() << std::endl;
    

    std::cout << "\n===== Testing std::list =====" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    
    std::cout << "Back: " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "Size: " << lst.size() << std::endl;
    
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    
    std::cout << "Iterating through std::list:" << std::endl;
    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();
    
    ++lst_it;
    --lst_it;
    
    while (lst_it != lst_ite) {
        std::cout << *lst_it << std::endl;
        ++lst_it;
    }

return 0;
}