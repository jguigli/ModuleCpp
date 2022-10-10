#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "Constructor DiamondTrap called" << std::endl;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) 
{
	std::cout << "Constructor name DiamondTrap called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copie)
{
	std::cout << "Constructor copy DiamondTrap called" << std::endl;
	_name = copie._name;
	_hitPoint = copie._hitPoint;
	_energyPoints = copie._energyPoints;
	_attackDamage = copie._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &copie)
{
	std::cout << "Copy assignement DiamondTrap called" << std::endl;
	if (this != &copie)
	{
		_name = copie._name;
		_hitPoint = copie._hitPoint;
		_energyPoints = copie._energyPoints;
		_attackDamage = copie._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and my sub object is " << ClapTrap::_name << std::endl;
}