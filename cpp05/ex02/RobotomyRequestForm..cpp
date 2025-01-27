#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequest",false,72,45),target(target){

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
        
    std::cout << "* drilling noises *\n";
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully\n";
    else
        std::cout << "Robotomy failed\n";
}