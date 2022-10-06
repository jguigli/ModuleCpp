#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Constructor FragTrap called" << std::endl;
	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor name FragTrap called" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& copie)
{
	std::cout << "Constructor copy FragTrap called" << std::endl;
	_name = copie._name;
	_hitPoint = copie._hitPoint;
	_energyPoints = copie._energyPoints;
	_attackDamage = copie._attackDamage;
}

FragTrap& FragTrap::operator=(FragTrap const &copie)
{
	std::cout << "Copy assignement FragTrap called" << std::endl;
	if (this != &copie)
	{
		_name = copie._name;
		_hitPoint = copie._hitPoint;
		_energyPoints = copie._energyPoints;
		_attackDamage = copie._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << _name << " want to highfives" << std::endl;
}