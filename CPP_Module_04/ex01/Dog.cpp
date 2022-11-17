#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    *this = copy;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
    if (this != &copy) {
        this->_brain = new Brain();
        *(this->_brain) = *(copy._brain);
    }
	//*this->_brain = *copy._brain;
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