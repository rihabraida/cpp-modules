#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"

Intern::Intern(){}

Intern::Intern(const Intern& other){
    (void)other;
}


Intern& Intern::operator=(const  Intern &obj){
    (void)obj;
    return *this;
}


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

    std::string tab[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm*(*form[3])(std::string) = {&MakePresidentialPardonForm ,&MakeRobotomyRequestForm ,&MakeShrubberyCreationForm};

    for(int i = 0;i < 3;i++)
    {
        if(name == tab[i])
        {
           std::cout << " Intern creates " << name << std::endl;
           return(form[i](target));
        }
    }
    std::cout << " Name passed as parameter doesn’t exist "  << std::endl;
    return(NULL);
}