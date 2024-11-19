#include "PhoneBook.hpp"

int main()
{
    std:: string str ;
    std:: string text ;
    PhoneBook tt ;
   
   while(1)
   {
     std::cout << "If want to add a contact write ADD"<< "\n";
     std::cout << "If want to search for contact write SEARCH"<< "\n";
     std::cout << "If want to exit the program write EXIT"<< "\n";
     std::getline(std::cin, str);
     if(str == "add" || str =="ADD")
     {  
       tt.Add_func();
     }
     else if(str == "SEARCH" || str == "search")
     {
        tt.Search_func();
     }
    else if(str == "exit" || str == "EXIT")
    {
        break;
    }
   } 
   
}