
#include "ShrubberyCreationForm.h"
#include "Bureaucrat.h"
ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("shrubbery",145,137),target(target){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

    check_Grade(executor);
    std::ofstream file((target + "_shrubbery").c_str());
    file << "    *    \n";
    file << "   ***   \n";
    file << "  *****  \n";
    file << " ******* \n";
    file << "   |||   \n";

}
