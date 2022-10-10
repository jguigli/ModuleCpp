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

bool Fixed::operator>(Fixed const &a) const
{
	return (_fix > a._fix);
}

bool Fixed::operator<(Fixed const &a) const
{
	return (_fix < a._fix);
}

bool Fixed::operator>=(Fixed const &a) const
{
	return (_fix >= a._fix);
}

bool Fixed::operator<=(Fixed const &a) const
{
	return (_fix <= a._fix);
}

bool Fixed::operator==(Fixed const &a) const
{
	return (_fix == a._fix);
}

bool Fixed::operator!=(Fixed const &a) const
{
	return (_fix != a._fix);
}

//arithmetiques
Fixed Fixed::operator+(Fixed const &a)
{
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(Fixed const &a)
{
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(Fixed const &a)
{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(Fixed const &a)
{
	if (a.toFloat() == 0)
	{
		std::cout << "Division by zero is undefined" << std::endl;
		return Fixed(this->toFloat());
	}
	return Fixed(this->toFloat() / a.toFloat());
}

//incre/decrementation
Fixed& Fixed::operator++()
{
	++_fix;
	return *this;
}

Fixed& Fixed::operator--()
{
	--_fix;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(_fix);
	_fix++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(_fix);
	_fix--;
	return temp;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	else
		return a;
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}
