#include "Fixed.h"

const int Fixed::bits = 8;


Fixed::Fixed(){
    value = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    *this = obj;
}

Fixed::Fixed(int num){
    
    value = num << bits;

}

Fixed::Fixed(float num)
{
    value =  roundf(num  * (1 << bits)) ;
}

int Fixed::toInt( void ) const{

    return (value >> bits);
}

float Fixed::toFloat( void ) const{
    
    return((float) value / ( 1 << bits)); 
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    if(this != &obj)
        value  = obj.value;
    return *this;
}

Fixed::~Fixed() {
    }

int Fixed::getRawBits() const {
        return value;
}

void Fixed::setRawBits(int const raw) {
        value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {

        os << obj.toFloat(); 
        return os;
}

bool Fixed::operator<(const Fixed &obj){ return(this->value < obj.value);}
bool Fixed::operator>(const Fixed &obj){return(this->value > obj.value);}
bool Fixed::operator<=(const Fixed &obj){return(this->value <= obj.value);}
bool Fixed::operator>=(const Fixed &obj){return(this->value >= obj.value);}
bool Fixed::operator==(const Fixed &obj){return(this->value == obj.value);}
bool Fixed::operator!=(const Fixed &obj){return(this->value != obj.value);}


Fixed Fixed::operator+(const Fixed &obj){
    Fixed sum;
    sum.value = this->value + obj.value;
    return(sum);
}
Fixed Fixed::operator-(const Fixed &obj){
    Fixed sum;
    sum.value = this->value - obj.value;
    return(sum);
}
Fixed Fixed::operator*(const Fixed &obj){
    Fixed sum;
    sum.value = (this->value * obj.value) >> bits;
    return(sum);
}
Fixed Fixed::operator/(const Fixed &obj){
    Fixed sum;
    if(obj.value == 0)
        return(Fixed(0));
    sum.value = (this->value << bits) / obj.value;
    return(sum);
} 




Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    value++;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    value--;
    return(tmp);
}

Fixed& Fixed::operator++()
{   
    value++;
    return(*this);
}
Fixed& Fixed::operator--()
{   
    value--;
    return(*this);
}



Fixed&  Fixed::min(Fixed& A, Fixed& B){

    if(A.value  < B.value)
        return(A);
    else
        return(B);
}

Fixed&  Fixed::max(Fixed& A, Fixed& B){

    if(A.value  > B.value)
        return(A);
    else
        return(B);
}

const Fixed& Fixed::min(const Fixed& A, const Fixed& B)
{
    if(A.value  < B.value)
        return(A);
    else
        return(B);
}


const Fixed& Fixed::max(const Fixed& A, const Fixed& B)
{
    if(A.value  > B.value)
        return(A);
    else
        return(B);

}