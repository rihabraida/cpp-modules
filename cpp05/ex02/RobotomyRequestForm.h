#ifndef  RobotomyRequestForm_H
# define  RobotomyRequestForm_H
#include "AForm.h"
#include "Bureaucrat.h"
class RobotomyRequestForm : public AForm{
private:
    std::string target;

public:
      RobotomyRequestForm();
      RobotomyRequestForm(const RobotomyRequestForm& other);
      RobotomyRequestForm(std::string target);
      RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
      void execute(Bureaucrat const & executor) const;
      

};
#endif