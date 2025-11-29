#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &wep): weapon(wep), name(name) {}

HumanA::~HumanA()
{
};

void HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
};