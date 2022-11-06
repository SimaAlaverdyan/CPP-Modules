#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    *this = copy;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}