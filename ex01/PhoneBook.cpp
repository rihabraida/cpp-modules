#include "PhoneBook.hpp"

    int PhoneBook::i = 0;   
    
    void PhoneBook::Add_func()
    {
    
        std:: string first_name ;
        std:: string last_name ;
        std:: string nickname ;
        std:: string phone_number;
        std:: string darkest_secret;

        std::cout << "enter your first name: ";
        std::getline(std::cin, first_name);
        std::cout << "enter your last name: ";
        std::getline(std::cin, last_name);
        std::cout << "enter your nickname: ";
        std::getline(std::cin, nickname);
        std::cout << "enter your phone nmber:";
        std::getline(std::cin, phone_number);
        std::cout << "enter your darkest secret:";
        std::getline(std::cin, darkest_secret);

        if(!first_name.empty() && !last_name.empty() && !nickname.empty() && !phone_number.empty())
        {   
            item[i] = Contact(i + 1,first_name,last_name,nickname,phone_number,darkest_secret);
            i++;
        }
        if(i == 8)
            i = 0;
    }
    void PhoneBook::Search_func()
    {   
        int j = 0;
        int index;
        std::string tmp;

        std::cout << std::setw(10)  << "index";
        std::cout << "|";
        std::cout << std::setw(10)  << "First Name";
        std::cout << "|";
        std::cout << std::setw(10)  << "Last Name";
        std::cout << "|";
        std::cout << std::setw(10)  << "Nickname";
        std::cout << "\n";

        
        while(!item[j].first_name.empty() && j < 8)
        {
            std::cout <<  "         " << item[j].index;
            std::cout << "|";
            item[j].print_contact(item[j].first_name);
            std::cout << "|";
            item[j].print_contact(item[j].last_name);
            std::cout << "|";
            item[j].print_contact(item[j].nickname);
            std::cout << "\n";
            j++;
        }
        std::cout << "Enter a contact index: ";
        std::getline(std::cin,tmp);
        index = atoi(tmp.c_str());
        
        if( index >= 1 && index <=8 && !item[index - 1].first_name.empty() )
        {    
            std::cout << "Contact Index: " << index << "\n";
            std::cout << "First Name: " << item[index - 1].first_name << "\n";
            std::cout << "Last Name: " << item[index - 1].last_name << "\n";
            std::cout << "Nickname: " << item[index - 1].nickname << "\n";
            std::cout << "Phone: " << item[index - 1].phone_number << "\n";
        } 
        else
            std::cout << "Inter a numeric value between 1 and 8" << "\n";
    }
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