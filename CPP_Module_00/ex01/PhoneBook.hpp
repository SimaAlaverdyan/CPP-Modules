#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
            Contact _contacts[8];
            int     _size;
            int     _index;
    public:
            PhoneBook() : _size(0), _index(0) {}
            int     get_size() const;
            void    add_contact(std::string data[5]);
            void    display_contact(int i) const;
            void    display_phonebook() const;
};

#endif