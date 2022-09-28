#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attack with their" << this->_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon.setType(weapon.getType());
}