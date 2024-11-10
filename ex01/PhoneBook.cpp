#include <iostream>
#include <string>
#include <cstring>


class PhoneBook{
public:
    class   Contact {
    public:
        std:: string first_name;
        std:: string last_name;
        std:: string nickname;
        int   phone_number;

        Contact(std:: string first_name, std:: string last_name,std:: string nickname,int phone_number)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
        }
    };
    Contact item[8];

};

int main()
{
    std:: string str ;
    std:: string first_name;
    std:: string last_name;
    std:: string nickname;
    int   phone_number;
    //PhoneBook phonebook1;
    //Contact contact1;
    //str = NULL;
   while(1)
   {
     std::cout << "If want to add a contact write ADD"<< "\n";
     std::cin >> str;
     if(str == "add")
     {  
        std::cout << "enter your first name: ";
        std::cin >> first_name;
        std::cout << "enter your last name: ";
        std::cin >> last_name;
        std::cout << "enter your nickname: ";
        std::cin >> nickname;
        std::cout << "enter your phone nmber:";
        std::cin >> phone_number;
        
     }
     else
        break;
   } 
}