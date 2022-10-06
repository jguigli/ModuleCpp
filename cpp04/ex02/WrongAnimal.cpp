#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& copie)
{
	std::cout << "Constructor copy WrongAnimal called" << std::endl;
	_type = copie.getType();
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copie)
{
	std::cout << "Copy assignement WrongAnimal called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "The Wrong Animal do nothing cause none sound matches" << std::endl;
}