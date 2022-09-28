#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string &const Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string value)
{
	this->type = value;
}