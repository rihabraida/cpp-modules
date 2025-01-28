#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("shrubbery",145,137),target(target){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
   
    if (getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > executeGrade)
        throw GradeTooLowException();
    std::ofstream file((target + "_shrubbery").c_str());
    file << "    *    \n";
    file << "   ***   \n";
    file << "  *****  \n";
    file << " ******* \n";
    file << "   |||   \n";

}
