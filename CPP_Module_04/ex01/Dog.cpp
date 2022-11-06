#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    this->_brain = new Brain();
    *this->_brain = *copy._brain;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	*this->_brain = *copy._brain;
	return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}