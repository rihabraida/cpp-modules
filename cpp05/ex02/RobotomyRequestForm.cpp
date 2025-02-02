#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest",72,45), target("Unknown") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other): AForm(other), target(other.target) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequest",72,45),target(target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
    if (this != &obj) {
        AForm::operator=(obj);
        target = obj.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
    check_Grade(executor);
    std::cout << "* drilling noises *\n";
    srand(time(0));
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully\n";
    else
        std::cout << "Robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){}