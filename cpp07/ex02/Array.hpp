#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iomanip>
#include <iostream>
#include <string.h>
#include <exception>

template < typename T >
class Array
{
	public:

	Array<T>(void);
	Array<T>(unsigned int n);
	Array<T>(Array<T> const & array);
	Array<T>& operator=(Array<T> const & array);
	T& operator[](int index) const;
	~Array<T>(void);

	int size() const;
	int isNotVoid() const;

	private:

	T *_content;
	int _size;

};

#include "Array.tpp"

#endif