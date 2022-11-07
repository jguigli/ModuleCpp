#include "Array.hpp"

template < typename T >
Array<T>::Array(void)
{
	_size = 0;
	_content = NULL;
}

template < typename T >
Array<T>::Array(unsigned int n)
{
	if (n < 1 || n > INT_MAX)
		throw std::overflow_error("Wrong size");
	_size = n;
	_content = new T[_size];
}

template < typename T >
Array<T>::Array(Array<T> const &array)
{
	_size = 0;
	_content = NULL;
	*this = array;
}

template < typename T >
Array<T>& Array<T>::operator=(Array<T> const & array)
{
	if (this != &array)
	{
		if (isNotVoid())
			delete [] _content;
		_size = array.size();
		_content = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			_content[i] = array[i];
		}
	}
	return *this;
}

template < typename T >
T& Array<T>::operator[](int index) const
{
	if (index >= _size || index < 0)
		throw std::overflow_error("Wrong index format");
	return _content[index];
}

template < typename T >
Array<T>::~Array()
{
	if (isNotVoid())
		delete [] _content;
}

template < typename T >
int Array<T>::size() const
{
	return _size;
}

template < typename T >
int Array<T>::isNotVoid() const
{
	if (_content && _size > 0)
		return 1;
	return 0;
}
