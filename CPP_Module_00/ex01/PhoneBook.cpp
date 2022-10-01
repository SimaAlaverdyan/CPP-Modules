#include "PhoneBook.hpp"

void    print_info(std::string str)
{
    unsigned long j = 0;
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
    {
        j = 0;
        while (j++ < 10 - str.length())
            std::cout << " ";
        std::cout << str;
    }
}

int     PhoneBook::get_size() const
{
    return (this->_size);
}

void    PhoneBook::add_contact(std::string data[5])
{
    int index;

    index = this->_index;
    this->_contacts[index].set_firstname(data[0]);
    this->_contacts[index].set_lastname(data[1]);
    this->_contacts[index].set_nickname(data[2]);
    this->_contacts[index].set_number(data[3]);
    this->_contacts[index].set_secret(data[4]);
    this->_index = (index + 1) % 8;
    if(this->_size < 8)
        this->_size++;
}

void    PhoneBook::display_contact(int i) const
{
    std::cout<<"First Name: " << this->_contacts[i].get_firstname() << std::endl;
    std::cout<<"Last Name: " << this->_contacts[i].get_lastname() << std::endl;
    std::cout<<"Nickname: " << this->_contacts[i].get_nickname() << std::endl;
    std::cout<<"Number: " << this->_contacts[i].get_number() << std::endl;
    std::cout<<"Darkest Secret: " << this->_contacts[i].get_secret() << std::endl;
}

void    PhoneBook::display_phonebook() const
{
    int i = 0;
    std::cout << "\033[0;35m";
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

    while (i < this->_size)
    {
        std::cout << "|         " << i;
        std::cout << "|";
        print_info(this->_contacts[i].get_firstname());
        std::cout << "|";
        print_info(this->_contacts[i].get_lastname());
        std::cout << "|";
        print_info(this->_contacts[i].get_nickname());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "\033[0m";
}