#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
};

Zombie::~Zombie()
{
    std::cout<<this->name<<": destoryed"<<std::endl;
};

std::string Zombie::get_()
{
    return (this->name);
};

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
};