#include "Zombie.hpp"

int main(void)
{
    Zombie *z1 = newZombie("nizar");
    z1->announce();
    delete(z1);
    Zombie *z2 = newZombie("nizarr");
    z2->announce();
    delete(z2);  
    Zombie *z3 = newZombie("nizarrr");
    z3->announce();
    delete(z3);

    std::cout<<std::endl;

    randomChump("mizar");
    randomChump("mizarr");
    randomChump("mizarrr");
    return (0);
}