
#include "ShrubberyCreationForm.h"
#include "Bureaucrat.h"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("shrubbery",145,137),target("Unknown"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("shrubbery",145,137),target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other): AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
    if (this != &obj) {
        AForm::operator=(obj);
        target = obj.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

    check_Grade(executor);
    std::ofstream file((target + "_shrubbery").c_str());
    file << "    *    \n";
    file << "   ***   \n";
    file << "  *****  \n";
    file << " ******* \n";
    file << "   |||   \n";

}

ShrubberyCreationForm::~ShrubberyCreationForm(){}