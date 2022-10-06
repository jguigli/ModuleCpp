#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& copie)
{
	std::cout << "Constructor copy ScavTrap called" << std::endl;
	_name = copie._name;
	_hitPoint = copie._hitPoint;
	_energyPoints = copie._energyPoints;
	_attackDamage = copie._attackDamage;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &copie)
{
	std::cout << "Copy assignement ScavTrap called" << std::endl;
	if (this != &copie)
	{
		_name = copie._name;
		_hitPoint = copie._hitPoint;
		_energyPoints = copie._energyPoints;
		_attackDamage = copie._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << _name << " goes in Gate keeper mode" << std::endl;
}