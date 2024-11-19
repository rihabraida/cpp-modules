
#pragma once
#ifndef PhoneBook_H
#define PhoneBook_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook {
private: 
    Contact item[8];
 public:
    static int i;
    void Add_func( );
    void Search_func();
};

#endif