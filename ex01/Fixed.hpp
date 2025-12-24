#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
    private:
        int num;
        static const int frac_ = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed &operator=(const Fixed &obj);
        float toFloat() const;
        int toInt(void) const;
        int getRawBits(void);
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &point);

#endif