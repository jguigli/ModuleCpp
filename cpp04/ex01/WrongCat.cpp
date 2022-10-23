#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Constructor WrongCat called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& copie)
{
	std::cout << "Constructor copy WrongCat called" << std::endl;
	*this = copie;
}

WrongCat& WrongCat::operator=(WrongCat const &copie)
{
	std::cout << "Copy assignement WrongCat called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WRONG MEOW" << std::endl;
}