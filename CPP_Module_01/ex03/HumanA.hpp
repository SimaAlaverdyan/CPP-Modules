#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon_type;
    public:
        HumanA(const std::string &name, Weapon &weapon_type);
        void attack(void) const;
};

#endif