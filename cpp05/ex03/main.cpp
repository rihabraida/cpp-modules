
#include "AForm.h"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int main() {

    Intern someRandomIntern;
    AForm* rrf = NULL;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if(rrf)
        std::cout << *rrf ;
    delete rrf;
    return 0;
}