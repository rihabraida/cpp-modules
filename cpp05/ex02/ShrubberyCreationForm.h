#include "AForm"

class ShrubberyCreationForm : public AForm{
private:
    std::string target;

public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(const ShrubberyCreationForm& other);
      ShrubberyCreationForm(std::string target);
      ShrubberyCreationForm& operator=(const ShrubberyCreationFormt &obj);
      void execute(Bureaucrat const & executor) const;
      

}