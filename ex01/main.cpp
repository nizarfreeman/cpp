#include "ScavTrap.hpp"

int main()
{
    // ClapTrap testing
    {
        ClapTrap a("nizar");
        ClapTrap b("mizar");

        a.attack("mizar");

        b.takeDamage(9);
        b.beRepaired(5);

        ClapTrap c(a);
        ClapTrap d;
        d = b;
        c.attack("mizar");

        d.takeDamage(10);
        d.beRepaired(5);
        d.attack("nizar");
        
        c = a = b;
    }

    std::cout<<std::endl<<std::endl;

    // ScavTrap testing
    {
        ScavTrap a("bob");
        ScavTrap b("alice");
        ScavTrap c;

        a.attack("alice");
        b.takeDamage(5);
        b.beRepaired(3);
        b.guardGate();

        b.attack("bob");
        a.takeDamage(6);
        a.beRepaired(4);
        a.guardGate();
        c = a = b;
    }
    return (0);
}