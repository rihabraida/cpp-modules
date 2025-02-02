#ifndef AForm_H
# define AForm_H

#include <iostream>
#include <string>
#include <exception> 

class Bureaucrat;

class   AForm{

    const std::string name ;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
     class GradeTooHighException : public std::exception{
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
             const char* what() const throw();
    };
    class FormNotSignedException : public std::exception {
        public:
            const char* what() const throw();
    };
    AForm();
    AForm( std::string name,int signGrade,int executeGrade);
    AForm(const AForm &other);
    AForm& operator=(const AForm &obj);
    std::string getName() const ;
    bool getSigned() const ;
    int getSignGrade() const ;
    int getExecuteGrade() const ;
    void beSigned(const Bureaucrat& bureaucrat);
    void check_Grade(Bureaucrat const & executor)const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~AForm(); 
};

std::ostream& operator<<(std::ostream& os, const AForm& form);
#endif