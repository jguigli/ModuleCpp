#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << this->_name << " attack with their " << _weapon->getType() << std::endl;
	else
		std::cout << "Human must have a weapon to attack" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	if (weapon.getType() == "")
		std::cout << "Weapon must exist" << std::endl;
	else	
		_weapon = &weapon;
}

Weapon&	HumanB::getWeapon(void) const
{
	return (*(_weapon));
}