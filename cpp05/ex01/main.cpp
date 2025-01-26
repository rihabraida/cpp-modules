


#include "Bureaucrat.h"

int main()
{

    Bureaucrat B("kiki",5);

    std::cout << "my Grade " << B.getGrade() << std::endl;
    B.DecrementGrade();
    std::cout << B;


}