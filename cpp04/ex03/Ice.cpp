#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Constructor Ice called" << std::endl;
	_type = "Ice";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Constructor copy Ice called" << std::endl;
	_type = type;
}

Ice::Ice(Ice const& copie)
{
	std::cout << "Constructor copy Ice called" << std::endl;
	*this = copie;
}

Ice& Ice::operator=(Ice const &copie)
{
	std::cout << "Copy assignement Ice called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Destructor Ice called" << std::endl;
}

std::string const & Ice::getType() const
{
	return _type;
}

Ice* Ice::clone() const
{
	Ice *copie;

	copie = new Ice();
	return copie;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}