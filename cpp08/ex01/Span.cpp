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

int Span::shortestSpan()
{
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
	int min = *min_element(_stock.begin(), _stock.end());
	int max = *max_element(_stock.begin(), _stock.end());
	return max - min;
}

const char* Span::SizeMax::what() const throw()
{
	return ("The max size of span has been reached."); 
}