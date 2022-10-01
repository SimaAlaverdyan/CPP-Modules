#include "Contact.hpp"

const std::string	&Contact::get_firstname() const
{
    return (this->_firstname);
}

const std::string &Contact::get_lastname() const
{
    return (this->_lastname);
}

const std::string &Contact::get_nickname() const
{
    return (this->_nickname);
}

const std::string &Contact::get_number() const
{
    return (this->_number);
}

const std::string &Contact::get_secret() const
{
    return (this->_secret);
}

void Contact::set_firstname(std::string fname)
{
    this->_firstname = fname;
}

void Contact::set_lastname(std::string lname)
{
    this->_lastname = lname;
}

void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::set_number(std::string number)
{
    this->_number = number;
}

void Contact::set_secret(std::string secret)
{
    this->_secret = secret;
}