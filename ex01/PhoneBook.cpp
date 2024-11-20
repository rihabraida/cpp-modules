#include "PhoneBook.hpp"

    int check_str(std::string str )
    {
        int i =0;
        while(str[i])
        {
            if(str[i] >= '0' && str[i] <= '9')
                i++;
            else
                return(0);
        }
        return(1);
    }
    PhoneBook::PhoneBook() : i(0){};   
    
    void PhoneBook::Add_func()
    {
    
        std:: string first_name ;
        std:: string last_name ;
        std:: string nickname ;
        std:: string phone_number;
        std:: string darkest_secret;

        std::cout << "\nenter your first name: ";
        getline(std::cin, first_name);
        std::cout << "enter your last name: ";
        getline(std::cin, last_name);
        std::cout << "enter your nickname: ";
        getline(std::cin, nickname);
        std::cout << "enter your phone nmber:";
        getline(std::cin, phone_number);
        std::cout << "enter your darkest secret:";
        getline(std::cin, darkest_secret);

        if(!first_name.empty() && !last_name.empty() && !nickname.empty() && !phone_number.empty() && !darkest_secret.empty())
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
        int index = - 1;
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
        getline(std::cin,tmp);
        if(check_str(tmp))
            index = atoi(tmp.c_str());
        if( index >= 1 && index <= 8 && !item[index - 1].get_FirstName().empty() )
        {    
            std::cout << "\nContact Index: " << item[index - 1].get_Index() << "\n";
            std::cout << "First Name: " << item[index - 1].get_FirstName()<< "\n";
            std::cout << "Last Name: " << item[index - 1].get_LastName() << "\n";
            std::cout << "Nickname: " << item[index - 1].get_Nickname() << "\n";
            std::cout << "Phone: " << item[index - 1].get_PhoneNumber() << "\n";
            std::cout << "Darkest secret: " << item[index -1].get_Darkest_secret() << "\n\n";
        } 
        else if ( index >= 1 && index <= 8 && item[index - 1].get_FirstName().empty())
            std::cout << "-------> Empty contact !! \n";
        else
            std::cout << "-------> Enter a numeric value between 1 and 8 !! \n";
    }
