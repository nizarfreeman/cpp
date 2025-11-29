#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): weapon(NULL), name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &wep)
{
    this->weapon = &wep;
};

void HumanB::attack()
{
    if (this->weapon)
        std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
    else
        std::cout<<this->name<<" has no weapon!"<<std::endl;
};