#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:

	Fixed();
	Fixed(Fixed const& copie);
	Fixed& operator=(Fixed const &copie);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);

	private:

	int _fixComma;
	static const int _fractionBit = 8;

};


#endif