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
        
        float operator+(const Fixed &obj) const;
        float operator-(const Fixed &obj) const;
        float operator*(const Fixed &obj) const;
        float operator/(const Fixed &obj) const;
        
        bool operator<(const Fixed &obj) const;
        bool operator>(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;

        Fixed operator++();
        Fixed operator--();
        
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &f, Fixed &s);
		static const Fixed &min(Fixed const &f, Fixed const &s);
		static Fixed &max(Fixed &f, Fixed &s);
		static const Fixed &max(Fixed const &f, const Fixed &s);

        float toFloat() const;
        int toInt(void) const;
        int getRawBits(void);
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &point);

#endif