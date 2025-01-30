#ifndef  PresidentialPardonForm_H
# define  PresidentialPardonForm_H
#include "AForm.h"


class PresidentialPardonForm : public AForm{
private:
    std::string target;

public:
      PresidentialPardonForm();
      PresidentialPardonForm(const  PresidentialPardonForm& other);
      PresidentialPardonForm(std::string target);
      PresidentialPardonForm& operator=(const  PresidentialPardonForm &obj);
      void execute(Bureaucrat const & executor) const;
      

};
#endif