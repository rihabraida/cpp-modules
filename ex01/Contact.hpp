
#pragma once

#ifndef Contact_H
#define Contact_H
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class   Contact {
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:

        Contact();
        Contact(int index,std::string first_name, std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret);
        void print_contact(std::string str);

        int get_Index();
        std::string get_FirstName();
        std::string get_LastName();
        std::string get_Nickname();
        std::string get_PhoneNumber();
        std::string get_Darkest_secret();
};

#endif