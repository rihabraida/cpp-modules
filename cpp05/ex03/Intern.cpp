#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
Intern::Intern(){}

// Intern::Intern(const Intern& other){

// }


// Intern& Intern::operator=(const  Intern &obj){

// }

Intern::~Intern(){}

AForm *MakePresidentialPardonForm(std::string target)
{
    return( new  PresidentialPardonForm(target));
}
AForm *MakeRobotomyRequestForm(std::string target)
{
    return( new  RobotomyRequestForm(target));
}
AForm  *MakeShrubberyCreationForm(std::string target)
{
    return( new  ShrubberyCreationForm(target));
}
AForm * Intern::makeForm(std::string name,std::string target){

    int i;
    std::string tab[4] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    AForm*(*form[3])(std::string) = {&MakePresidentialPardonForm ,&MakeRobotomyRequestForm ,&MakeShrubberyCreationForm};
    AForm* tt;
    for(i = 0;i < 3;i++)
    {
        if(name == tab[i])
        {
           tt = form[i](target); 
           std::cout << " Intern creates " << tt->getName() << std::endl;
           return(tt);
        }
    }
    std::cout << " Name passed as parameter doesn’t exist "  << std::endl;
    return(NULL);
}