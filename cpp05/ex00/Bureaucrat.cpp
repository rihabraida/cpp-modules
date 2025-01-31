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

Bureaucrat::~Bureaucrat() {}


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