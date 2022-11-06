#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    _brain = new Brain();
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    this->_brain = new Brain();
    *this->_brain = *copy._brain;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	*this->_brain = *copy._brain;
	return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}