#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string value)
{
	if (value == "")
		std::cout << "Weapon must have an existing name" << std::endl;
	else
		_type = value;
}