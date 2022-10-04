#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fix = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fix = value * (1 << _bit);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fix = roundf(value * (1 << _bit));

}

Fixed::Fixed(Fixed const& copie)
{
	std::cout << "Copy constructor called" << std::endl;
	_fix = copie.getRawBits();
}

Fixed& Fixed::operator=(Fixed const &copie)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copie)
	{
		_fix = copie.getRawBits();
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
	return (_fix);
}

void Fixed::setRawBits(int const raw)
{
	_fix = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_fix / (float)(1 << _bit));
}

int Fixed::toInt(void) const
{
	return (_fix >> _bit);
}

std::ostream& operator<<(std::ostream &Flux, Fixed const &value)
{
	Flux << value.toFloat();
	return (Flux);
}