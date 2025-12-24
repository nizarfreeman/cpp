#include "Fixed.hpp"

Fixed::Fixed(): num(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    this->num = copy.num;
    std::cout<<"Copy constructor called"<<std::endl;
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