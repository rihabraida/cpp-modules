#include "Bureaucrat.h"

Bureaucrat::Bureaucrat():name("Default"),grade(150){}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
        if (this != &obj) {
            this->grade = obj.grade;
        }
        return *this;
}

Bureaucrat::Bureaucrat(std::string name ,int value):name(name){
        if(value < 1)
            throw GradeTooHighException();
        if(value > 150)
            throw GradeTooLowException();
        grade = value;

}

std::string Bureaucrat::getName() const{
    return(name);
}
int Bureaucrat::getGrade() const{
    return(grade);
}


void Bureaucrat::IncrementGrade()
{
    if(grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::DecrementGrade(){
    if(grade == 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
        os <<  obj.getName() << "  bureaucrat grade  " << obj.getGrade() << std::endl;
        return os;
}
 const char*  Bureaucrat::GradeTooHighException::what() const throw() {
     return("Grade Too High");
}
 const char*  Bureaucrat::GradeTooLowException::what() const throw() {
     return("Grade Too Low");
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::signForm(AForm& form){
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
            std::cout << name << " couldn't sign " << form.getName() 
                    << " because grade is too low" << std::endl;
    }

}

void Bureaucrat::executeForm(AForm const & form){
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(std::exception &e){

        std::cout << name << " couldn't execute " << form.getName() << " because  "
                        << e.what() << std::endl;
    }
}