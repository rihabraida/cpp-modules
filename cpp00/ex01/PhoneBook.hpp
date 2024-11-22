
#pragma once
#ifndef PhoneBook_H
#define PhoneBook_H

#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook {
private: 
    Contact item[8];
    int i;
 public:
    PhoneBook();
    void Add_func( );
    void Search_func();
};

#endif