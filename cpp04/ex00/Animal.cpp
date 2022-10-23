#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Animal called" << std::endl;
	_type = "Animal";
}

Animal::Animal(Animal const& copie)
{
	std::cout << "Constructor copy Animal called" << std::endl;
	*this = copie;
}

Animal& Animal::operator=(Animal const &copie)
{
	std::cout << "Copy assignement Animal called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "The animal do nothing cause none sound matches" << std::endl;
}