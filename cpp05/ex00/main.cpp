
#include "Bureaucrat.h"

int main()
{
    try{
        Bureaucrat B("kiki",5);
        std::cout << B << std::endl;
        B.IncrementGrade();
        std::cout << "AFTER INCREMENT " << B << std::endl;
        B.DecrementGrade();
        std::cout << "AFTER DECREMENT " << B << std::endl;
        Bureaucrat B1("COCO",0);
    }
    catch (std::exception& e) {
         std::cerr << "Error: "  << e.what() << std::endl;
    }

}