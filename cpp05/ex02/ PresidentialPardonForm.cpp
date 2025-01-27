
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("RobotomyRequest",false,25,5),target(target){

}

void PresidentialPardonForm::execute() const {
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}