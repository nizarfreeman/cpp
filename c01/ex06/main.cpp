#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    Harl ss;

    if (argc != 2)
    {
        std::cout<<"argc must be 2"<<std::endl;
        return (1);
    }
    ss.complain(argv[1]);
}