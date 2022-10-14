#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
