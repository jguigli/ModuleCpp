#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iomanip>
#include <iostream>
#include <string.h>

template < typename T >
void swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template < typename T >
T min(T const & a, T const & b)
{
	if (a < b)
		return a;
	else if (a > b)
		return b;
	else
		return b;
}

template < typename T >
T max(T const & a, T const & b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return b;
}


#endif