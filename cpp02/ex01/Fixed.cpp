#include "Fixed.h"

const int Fixed::bits = 8;


Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = obj.value;
}

Fixed::Fixed(int num){
    
    std::cout << "Int constructor called" << std::endl;
    value = num << bits;

}

Fixed::Fixed(float num)
{
    std::cout << "Float constructor called" << std::endl;
    value =  roundf(num  * (1 << bits)) ;
}

int Fixed::toInt( void ) const{

    return (value >> bits);
}

float Fixed::toFloat( void ) const{
    
    return((float) value / ( 1 << bits)); //division by 0
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    if(this != &obj)
    {  
        std::cout << "Copy assignment operator called" << std::endl;
        value  = obj.getRawBits();
    }
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {

        os << obj.toFloat(); 
        return os;
}