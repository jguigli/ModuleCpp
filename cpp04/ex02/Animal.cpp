#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}