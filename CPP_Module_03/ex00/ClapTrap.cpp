#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor" << std::endl;
    _name = "noname";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attack(0)
{
    std::cout << "Constructor with parameter" << std::endl;
}   

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructer" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attack = copy._attack;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "There is no enough hit points" << std::endl;
        return ;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "There is no enough energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << "attacks " << target << ", causing"
    << _attack << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << "attacs and gets " << amount << " points" << std::endl;
    _hitPoints += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << "repairs and gets " << amount << " points" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
}