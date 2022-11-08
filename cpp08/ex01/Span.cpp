#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int maxSize) : _maxSize(maxSize) 
{
	
}

Span::Span(Span const& copie)
{
	*this = copie;
}

Span& Span::operator=(Span const &copie)
{
	if (this != &copie)
	{
		_maxSize = copie._maxSize;
		_stock = copie._stock;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
	if (_stock.size() < _maxSize)
	{
		_stock.push_back(nb);
	}
	else
		throw Span::SizeMax();
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp(begin, end);

	if (Span::getMaxSize() - Span::getSize() < tmp.size())
		throw Span::SizeMax();
	std::copy(begin, end, std::back_inserter(_stock));
}

int Span::shortestSpan()
{	
	if (_stock.size() < 2)
		throw Span::NotEnoughNumber();
	int span = Span::longestSpan();
	std::sort(_stock.begin(), _stock.end());
	std::vector<int>::iterator it = _stock.begin();
	int temp = 0;
	int tempp = *it++;
	for (; it != _stock.end(); ++it)
	{
		temp = *it;
		if (temp - tempp < span)
			span = temp - tempp;
		tempp = temp;
	}
	return span;
}

int Span::longestSpan()
{
	if (_stock.size() < 2)
		throw Span::NotEnoughNumber();
	int min = *min_element(_stock.begin(), _stock.end());
	int max = *max_element(_stock.begin(), _stock.end());
	return max - min;
}

const char* Span::SizeMax::what() const throw()
{
	return ("The max size of span has been reached."); 
}

const char* Span::NotEnoughNumber::what() const throw()
{
	return ("Not enough number are stock to get longest or shortest span"); 
}

size_t	Span::getSize() const
{
	return _stock.size();
}

size_t Span::getMaxSize() const
{
	return _maxSize;
}