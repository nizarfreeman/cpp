#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(const std::string type): Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;  // Delete old brain first!
        brain = new Brain(*other.brain);  // Deep copy the new brain
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}