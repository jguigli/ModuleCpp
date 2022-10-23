#ifndef ITER_HPP
#define ITER_HPP

#include <iomanip>
#include <iostream>
#include <string.h>

template < typename T >
void valDisplay(T & e)
{
	std::cout << "The value is " << e << std::endl;
}

template < typename T >
void iter(T *a, int b, void (*funct)(T &))
{
	for (int i = 0; i < b; i++)
	{
		funct(a[i]);
	}
}


#endif