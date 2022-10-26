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
		throw SizeMax();
}

// int Span::shortestSpan()
// {

// }

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