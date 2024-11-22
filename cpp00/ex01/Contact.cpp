
#include "Contact.hpp"

    Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number("") {}
    Contact::Contact(int index,std::string first_name, std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret)
        {
            this->index = index;
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
            this->darkest_secret = darkest_secret;
        }
    void Contact::print_contact(std::string str)
        {
            int i;

            if(str.length() > 10)
            {    
                str = str.substr(0,10);
                str[9] = '.';
                std::cout << str ;
            }
            else
            {    
                std::cout << str ;
                i = str.length();
                while(i < 10)
                {    
                    std::cout << " "; 
                    i++; 
                }
            }
        }
        int Contact::get_Index(){
            return(index);
        }
        std::string Contact::get_FirstName(){
            return(first_name);
        }
        std::string Contact::get_LastName(){
            return(last_name);
        }
         std::string Contact::get_Nickname(){
            return(nickname);
        }
         std::string Contact::get_PhoneNumber(){
            return(phone_number);
        }
         std::string Contact::get_Darkest_secret(){
            return(darkest_secret);
        }