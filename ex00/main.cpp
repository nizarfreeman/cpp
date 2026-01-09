#include "ClapTrap.hpp"

int main(void)
{
    // ClapTrap testing
    {
        ClapTrap a("nizar");
        ClapTrap b("mizar");
        ClapTrap c;

        a.attack("alice");
        b.takeDamage(5);
        b.beRepaired(3);

        b.attack("bob");
        a.takeDamage(6);
        a.beRepaired(4);
        c = a = b;
    }

    return (0);
}