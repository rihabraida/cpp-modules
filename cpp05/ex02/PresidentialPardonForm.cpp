
#include "PresidentialPardonForm.h"
#include "Bureaucrat.h"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("RobotomyRequest",25,5),target(target){

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
        check_Grade(executor);
        std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}