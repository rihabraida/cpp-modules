#include "PhoneBook.hpp"

int main()
{
    std:: string str ;
    std:: string text ;
    PhoneBook tt ;
   
   while(1)
   {
     std::cout << "\n\nIf want to add a contact write ADD"<< "\n";
     std::cout << "If want to search for contact write SEARCH"<< "\n";
     std::cout << "If want to exit the program write EXIT"<< "\n\n";
     getline(std::cin, str);
     if(std::cin.eof())
          return(1);
     if(str =="ADD")
     {  
       tt.Add_func();
     }
     else if(str == "SEARCH")
     {
        tt.Search_func();
     }
    else if(str == "EXIT")
    {
        break;
    }
   } 
   
}