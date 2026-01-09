#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
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

    std::cout<<std::endl<<std::endl;

    {
        FragTrap a("khalil");
        FragTrap b("dalil");
        FragTrap c;

        a.attack("alice");
        b.takeDamage(5);
        b.beRepaired(3);
        b.highFivesGuys();

        b.attack("bob");
        a.takeDamage(6);
        a.beRepaired(4);
        a.highFivesGuys();
        c = a = b;
    }
    return (0);
}
