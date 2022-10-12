#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon_type;
    public:
        HumanB(const std::string &name);
        void attack(void) const;
        void setWeapon(Weapon &weapon_type);
};

#endif