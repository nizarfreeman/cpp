#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout<<this->name<<": destroyed"<<std::endl;
}

void Zombie::set_(std::string name)
{
    this->name = name;
}

std::string Zombie::get_(void)
{
    return (this->name);
}

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}