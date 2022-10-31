#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Constructor Cure called" << std::endl;
	_type = "cure";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Constructor copy Cure called" << std::endl;
	_type = type;
}

Cure::Cure(Cure const& copie) : AMateria(copie)
{
	std::cout << "Constructor copy Cure called" << std::endl;
	*this = copie;
}

Cure& Cure::operator=(Cure const &copie)
{
	std::cout << "Copy assignement Cure called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Destructor Cure called" << std::endl;
}

std::string const & Cure::getType() const
{
	return _type;
}

Cure* Cure::clone() const
{
	Cure *copie;

	copie = new Cure();
	return copie;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
