#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Constructor Dog called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const& copie) : Animal(copie)
{
	std::cout << "Constructor copy Dog called" << std::endl;
	*this = copie;
}

Dog& Dog::operator=(Dog const &copie)
{
	std::cout << "Copy assignement Dog called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
		*_brain = *(copie.getBrain());
	}
	return *this;
}

Animal& Dog::operator=(Animal const &copie)
{
	std::cout << "Copy assignement Dog called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
		*_brain = *(copie.getBrain());
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "WOUF" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (_brain);
}