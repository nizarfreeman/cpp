#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const int size = 10;
    Animal* animals[size];

    // Fill half Dogs, half Cats
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();

    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n--- Deleting animals (must call correct destructors) ---\n";

    // Delete as Animals (polymorphism test)
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n--- Deep copy test ---\n";

    Dog original;
    original.getBrain()->setIdea(0, "I want food");

    Dog copy(original); // copy constructor

    copy.getBrain()->setIdea(0, "I want sleep");

    std::cout << "Original idea: " 
              << original.getBrain()->getIdea(0) << std::endl;

    std::cout << "Copy idea: " 
              << copy.getBrain()->getIdea(0) << std::endl;

    // If both print the same thing → you screwed up (shallow copy)

    std::cout << "\n--- Assignment deep copy test ---\n";

    Dog assigned;
    assigned = original;

    assigned.getBrain()->setIdea(0, "I want chaos");

    std::cout << "Original idea: " 
              << original.getBrain()->getIdea(0) << std::endl;

    std::cout << "Assigned idea: " 
              << assigned.getBrain()->getIdea(0) << std::endl;

    return 0;
}
