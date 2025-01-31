#ifndef  ShrubberyCreationForm_H
# define  ShrubberyCreationForm_H

#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm{
private:
    std::string target;

public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(const ShrubberyCreationForm& other);
      ShrubberyCreationForm(std::string target);
      ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
      void execute(Bureaucrat const & executor) const;
      ~ShrubberyCreationForm();

};
#endif