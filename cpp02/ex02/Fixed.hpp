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
	//comparaison
	bool operator>(Fixed const &a);
	bool operator<(Fixed const &a);
	bool operator>=(Fixed const &a);
	bool operator<=(Fixed const &a);
	bool operator==(Fixed const &a);
	bool operator!=(Fixed const &a);
	//arithmetiques
	Fixed operator+(Fixed const &a);
	Fixed operator-(Fixed const &a);
	Fixed operator*(Fixed const &a);
	Fixed operator/(Fixed const &a);
	//incre/decrementation
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int a);
	Fixed operator--(int a);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static int min(Fixed &a, Fixed &b);
	static int min(Fixed const &a, Fixed const &b);
	static int max(Fixed &a, Fixed &b);
	static Fixed max(Fixed const &a, Fixed const &b);

	private:

	int _fix;
	static const int _bit = 8;

};

std::ostream& operator<<(std::ostream &Flux, Fixed const &value);

#endif