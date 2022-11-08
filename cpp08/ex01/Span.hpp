#ifndef SPAN_HPP
#define SPAN_HPP

#include <iomanip>
#include <iostream>
#include <string.h>
#include <exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <list>
#include <typeinfo>

class Span
{
	public:

	Span();
	Span(unsigned int);
	Span(const Span &copie);
	~Span();
	Span &operator=(const Span &copie);

	void addNumber(int);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	size_t	getSize() const;
	size_t getMaxSize() const;

	class SizeMax : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class NotEnoughNumber : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:

	unsigned int _maxSize;
	std::vector<int> _stock;
};

#endif