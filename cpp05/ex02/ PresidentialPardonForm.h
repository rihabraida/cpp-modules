
#include "AForm.h"

class PresidentialPardonForm : public AForm{
private:
    std::string target;

public:
      PresidentialPardonForm();
      PresidentialPardonForm(const  PresidentialPardonForm& other);
      PresidentialPardonForm(std::string target);
      PresidentialPardonForm& operator=(const  PresidentialPardonFormt &obj);
      void execute(Bureaucrat const & executor) const;
      

}