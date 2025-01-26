#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>
#include <string>
#include <exception> 

class GradeTooHighException : public std::exception{
public:
    std::string getMessage() const 
    {
        return("Grade Too High");
    }
     
};
class GradeTooLowException : public std::exception{
public:
   std::string getMessage() const 
    {
        return("Grade  Too Low");
    }
};


class Bureaucrat{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat &obj);
    std::string getName() const;
    int getGrade()const;
    void IncrementGrade();
    void DecrementGrade();
    void signForm(Form& form);
    //destructor
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
#endif