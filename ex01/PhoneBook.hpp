
#pragma once
#ifndef PhoneBook_H
#define PhoneBook_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class   Contact {
    public:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

        Contact();
        Contact(int index,std::string first_name, std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret);
       
        void print_contact(std::string str);
        
    };


class PhoneBook {
 public:
    Contact item[8];
    static int i;
    void Add_func( );
    void Search_func();

};

#endif