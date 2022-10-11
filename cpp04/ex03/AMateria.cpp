#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Constructor AMateria called" << std::endl;
	_type = "AMateria";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Constructor type AMateria called" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria const& copie)
{
	std::cout << "Constructor copy AMateria called" << std::endl;
	*this = copie;
}

AMateria& AMateria::operator=(AMateria const &copie)
{
	std::cout << "Copy assignement AMateria called" << std::endl;
	if (this != &copie)
	{
		_type = copie.getType();
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria called" << std::endl;
}

const std::string &AMateria::getType() const
{
	return (_type);
}