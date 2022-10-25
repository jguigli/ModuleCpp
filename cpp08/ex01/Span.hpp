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
	void shortestSpan();
	void longestSpan();

	private:

	unsigned int _maxSize;
	std::vector<int> _stock;
};

#endif