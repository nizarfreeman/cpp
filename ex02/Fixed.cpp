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

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->toFloat() > obj.toFloat());
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->toFloat() < obj.toFloat());
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->toFloat() >= obj.toFloat());
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->toFloat() <= obj.toFloat());
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->toFloat() == obj.toFloat());
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->toFloat() != obj.toFloat());
}

////////////////////////////////////////////////////////////////

float	Fixed::operator+(const Fixed &obj) const
{
	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator-(const Fixed &obj) const
{
	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator*(const Fixed &obj) const
{
	return (this->toFloat() * obj.toFloat());
}

float	Fixed::operator/(const Fixed &obj) const
{
    if (obj.toFloat() < 1e-9)
    {
        std::cout<<"Dividing by zero detected !"<<std::endl;
        return (0);
    }
    return (this->toFloat() / obj.toFloat());
}

std::ostream &operator<<(std::ostream &out, Fixed const &point)
{
    out<<point.toFloat();
    return (out);
}

///////////////////////////////////////////////////////////////

Fixed	Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->num--;
	return (*this);
}


Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->num;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->num;
	return (tmp);
}

///////////////////////////////////////////////////////////////////


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

Fixed	&Fixed::min(Fixed &f, Fixed &s)
{
	if (f.toFloat() <= s.toFloat())
		return (f);
	else
		return (s);
}

const Fixed	&Fixed::min(const Fixed &f, const Fixed &s)
{
	if (f.toFloat() <= s.toFloat())
		return (f);
	else
		return (s);
}

Fixed	&Fixed::max(Fixed &f, Fixed &s)
{
	if (f.toFloat() >= s.toFloat())
		return (f);
	else
		return (s);
}

const Fixed	&Fixed::max(const Fixed &f, const Fixed &s)
{
	if (f.toFloat() >= s.toFloat())
		return (f);
	else
		return (s);
}