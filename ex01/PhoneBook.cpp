#include <iostream>
#include <string>
#include <cstring>

class   Contact {
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;

        Contact() : first_name(""), last_name(""), 
                   nickname(""), phone_number("") {}
        Contact(std::string first_name, std::string last_name,std::string nickname,std::string phone_number)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
        }
        void print_contact(std::string str)
        {
            int i;

            if(str.length() > 10)
            {    
                str[9] = '.';
                str[10] = '\0';
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
    };
class PhoneBook {
 public:
    Contact item[8];
};

int main()
{
    std:: string str ;
    std:: string first_name ;
    std:: string last_name ;
    std:: string nickname ;
    std:: string phone_number;
    PhoneBook tt ;
    int i = 0;
    int j ;
    int index;
   while(1)
   {
     std::cout << "If want to add a contact write ADD"<< "\n";
     std::cin >> str;
     if(str == "add" || str =="ADD")
     {  
        std::cout << "enter your first name: ";
        std::cin >> first_name;
        std::cout << "enter your last name: ";
        std::cin >> last_name;
        std::cout << "enter your nickname: ";
        std::cin >> nickname;
        std::cout << "enter your phone nmber:";
        std::cin >> phone_number;
        if(!first_name.empty() && !last_name.empty() && !nickname.empty() && !phone_number.empty())
            tt.item[i++] = Contact(first_name,last_name,nickname,phone_number);
        if(i == 8)
            i = 0;
     }
     else if(str == "SEARCH" || str == "search")
     {
        j = 0;
        // std::cout << "Index   |";
        // std::cout << " First Name |" ;
        // std::cout << " Last Name  |" ;
        // std::cout << " Nickname    " ;
        // std::cout << "\n";

        while(!tt.item[j].first_name.empty() && j < 8)
        {
            std::cout <<  j + 1 << "         ";
            std::cout << " | ";
            tt.item[j].print_contact(first_name);
            std::cout << " | ";
            tt.item[j].print_contact(last_name);
            std::cout << " | ";
            tt.item[j].print_contact(nickname);
            std::cout << "\n";
            j++;
        }
        std::cout << "Enter a contact index: ";
        std::cin >> index;
        if(index >= 1 && index <=8)
        {    
            std::cout << "Contact Index: " << index << "\n";
            std::cout << "First Name: " << tt.item[index - 1].first_name << "\n";
            std::cout << "Last Name: " << tt.item[index - 1].last_name << "\n";
            std::cout << "Nickname: " << tt.item[index - 1].nickname << "\n";
            std::cout << "Phone: " << tt.item[index - 1].phone_number << "\n";
        } 
        else
            std::cout << "Index out of range" << "\n";
     }
    else if(str == "exit" || str == "EXIT")
    {
        break;
    }
   } 
   
}