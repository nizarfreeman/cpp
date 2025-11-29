#include "Zombie.hpp"

int main(void)
{
    Zombie *hord = zombieHorde(10, "Testing_Zombie");
    if (!hord)
        return (1);
    for (int i = 0; i < 10; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
    return 0;
}