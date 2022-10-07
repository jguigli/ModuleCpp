#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Constructor AAnimal called" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const& copie)
{
	std::cout << "Constructor copy AAnimal called" << std::endl;
	_type = copie.getType();
}

AAnimal& AAnimal::operator=(AAnimal const &copie)
{
	std::cout << "Copy assignement AAnimal called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal called" << std::endl;
}

const std::string &AAnimal::getType() const
{
	return (_type);
}