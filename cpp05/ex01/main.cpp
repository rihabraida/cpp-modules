
#include "Bureaucrat.h"
#include "Form.h"

int main() {
    try {
        Bureaucrat bob("Bob", 50);
        Form tax("Tax Form", 75, 50);

        std::cout << bob << std::endl;
        std::cout << tax << std::endl;

        bob.signForm(tax);
        std::cout << tax << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Error: "  << e.what() << std::endl;
    }

    return 0;
}