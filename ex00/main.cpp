#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    
    c = b;
    
    std::cout << a.getRawBits()/256 << std::endl;
    std::cout << b.getRawBits()/256 << std::endl;
    std::cout << c.getRawBits()/256 << std::endl;
    return 0;
}