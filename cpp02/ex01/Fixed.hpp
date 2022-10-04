#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	public:

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const& copie);
	Fixed& operator=(Fixed const &copie);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	private:

	int _fix;
	static const int _bit = 8;

};

std::ostream& operator<<(std::ostream &Flux, Fixed const &value);

#endif