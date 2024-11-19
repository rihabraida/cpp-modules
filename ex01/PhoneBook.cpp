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

        
        while(!item[j].get_FirstName().empty() && j < 8)
        {
            std::cout <<  "         " << item[j].get_Index();
            std::cout << "|";
            item[j].print_contact(item[j].get_FirstName());
            std::cout << "|";
            item[j].print_contact(item[j].get_LastName());
            std::cout << "|";
            item[j].print_contact(item[j].get_Nickname());
            std::cout << "\n";
            j++;
        }
        std::cout << "Enter a contact index: ";
        std::getline(std::cin,tmp);
        index = atoi(tmp.c_str());
        
        if( index >= 1 && index <= 8 && !item[index - 1].get_FirstName().empty() )
        {    
            std::cout << "Contact Index: " << index << "\n";
            std::cout << "First Name: " << item[index - 1].get_FirstName()<< "\n";
            std::cout << "Last Name: " << item[index - 1].get_LastName() << "\n";
            std::cout << "Nickname: " << item[index - 1].get_Nickname() << "\n";
            std::cout << "Phone: " << item[index - 1].get_PhoneNumber() << "\n";
        } 
        else
            std::cout << "Inter a numeric value between 1 and 8" << "\n";
    }
