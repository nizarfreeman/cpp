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
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed &operator=(const Fixed &obj);
        int getRawBits(void);
        void setRawBits(int const raw);
};

#endif