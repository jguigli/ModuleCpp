#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const& copie)
{
	std::cout << "Constructor copy Cat called" << std::endl;
	*this = copie;
}

Cat& Cat::operator=(Cat const &copie)
{
	std::cout << "Copy assignement Cat called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}