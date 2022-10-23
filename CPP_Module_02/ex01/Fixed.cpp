#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = intNum << _fractional_bits;
}

Fixed::Fixed(const float floatNum)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(floatNum * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(copy.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int Fixed::toInt(void) const
{
    return ((_value >> _fractional_bits));
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}