#ifndef Intern_H
# define Intern_H
#include "AForm.h"

class Intern{

public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const  Intern &obj);
    ~Intern();
    AForm *makeForm(std::string name,std::string target);

};


#endif