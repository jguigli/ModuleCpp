#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const& copie) : Animal(copie)
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
		*_brain = *(copie.getBrain());
	}
	return *this;
}

Animal& Cat::operator=(Animal const &copie)
{
	std::cout << "Copy assignement Dog called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
		*_brain = *(copie.getBrain());
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (_brain);
}