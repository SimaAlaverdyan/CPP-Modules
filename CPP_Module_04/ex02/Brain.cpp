#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return (*this);
}