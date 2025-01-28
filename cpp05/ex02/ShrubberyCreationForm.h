#include "AForm.h"
#include "Bureaucrat.h"

class ShrubberyCreationForm : public AForm{
private:
    std::string target;

public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(const ShrubberyCreationForm& other);
      ShrubberyCreationForm(std::string target);
      ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
      void execute(Bureaucrat const & executor) const;
      

};