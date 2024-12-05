#include "Fixed.h"

const int Fixed::bits = 8;


Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    value = obj.getRawBits();
}
Fixed::Fixed(int num){

value = num << 8;

}
Fixed::Fixed(float num)
{
    value = num  * 256;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value  = obj.getRawBits();
    return *this;
}

Fixed::~Fixed() {
        std::cout << "Destructor called" << std::endl;
    }

int Fixed::getRawBits() const {
        std::cout << "getRawBits member function called" << std::endl;
        return value;
}

void Fixed::setRawBits(int const raw) {
        value = raw;
}