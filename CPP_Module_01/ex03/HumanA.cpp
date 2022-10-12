#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon_type) : _weapon_type(weapon_type)
{
    this->_name = name;
}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with their " << _weapon_type.getType() << std::endl;
}