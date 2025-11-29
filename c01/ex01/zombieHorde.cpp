#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 1)
    {
        std::cout<<"Zombie horde cannot contain less that 1 zombie."<<std::endl;
        return (NULL);
    }
    Zombie *hord = new Zombie[N];
    if (!hord)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        hord[i].set_(name);
    }
    return (hord);
}