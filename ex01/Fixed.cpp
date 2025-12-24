#include "Fixed.hpp"

Fixed::Fixed(): num(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
    std::cout<<"Copy constructor called"<<std::endl;
}

Fixed::Fixed(const int i)
{
    this->num = i << this->frac_;
    std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float i)
{
    this->num = roundf(i * (1 << this->frac_));
    std::cout<<"Float constructor called"<<std::endl;
}

Fixed::~Fixed()
{
    std::cout<<"Deconstructor called"<<std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &obj)
        this->num = obj.num;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &point)
{
    out<<point.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
    return ((float)this->num / (float)(1 << this->frac_));
}

int Fixed::toInt(void) const
{
    return (this->num >> this->frac_);
}

int Fixed::getRawBits(void)
{
    std::cout<<"getRawBits memeber function called"<<std::endl;
    return (this->num);
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->num = raw;
}