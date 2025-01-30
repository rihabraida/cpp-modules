
#include "AForm.h"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int main() {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    return 0;
}