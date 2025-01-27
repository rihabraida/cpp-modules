#include "AForm.h"

class RobotomyRequestForm : public AForm{
private:
    std::string target;

public:
      RobotomyRequestForm();
      RobotomyRequestForm(const RobotomyRequestForm& other);
      RobotomyRequestForm(std::string target);
      RobotomyRequestForm& operator=(const RobotomyRequestFormt &obj);
      void execute(Bureaucrat const & executor) const;
      

}