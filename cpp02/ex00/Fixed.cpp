#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixComma = 0;
}

Fixed::Fixed(Fixed const& copie)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixComma = copie.getRawBits();
}

Fixed& Fixed::operator=(Fixed const &copie)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copie)
	{
		_fixComma = copie.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixComma);
}

void Fixed::setRawBits(int const raw)
{
	_fixComma = raw;
}