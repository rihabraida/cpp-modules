

#include "AForm.h"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"

int main() {
    try {
        Bureaucrat president("President", 5);
        Bureaucrat intern("Intern", 140);

        ShrubberyCreationForm shrub("garden");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Criminal");

        std::cout << "\nTesting forms with intern:\n";
        intern.signForm(shrub);
        intern.executeForm(shrub);
        std::cout << "\nTesting forms with president:\n";
        president.signForm(robot);
        president.executeForm(robot);
        president.signForm(pardon);
        president.executeForm(pardon);
    }
    catch (std::exception& e) {
        std::cerr << "Error: "  << e.what() << std::endl;
    }
    return 0;
}