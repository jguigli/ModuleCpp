#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap const& copie)
{
	std::cout << "Constructor copy ClapTrap called" << std::endl;
	_name = copie._name;
	_hitPoint = copie._hitPoint;
	_energyPoints = copie._energyPoints;
	_attackDamage = copie._attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &copie)
{
	std::cout << "Copy assignement ClapTrap called" << std::endl;
	if (this != &copie)
	{
		_name = copie._name;
		_hitPoint = copie._hitPoint;
		_energyPoints = copie._energyPoints;
		_attackDamage = copie._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoint > 0 && _energyPoints > 0)
	{
		std::cout << _name << " attack " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << _name << " can't attack, he is dead or out of energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint > 0)
	{
		std::cout << _name << " take " << amount << " damage";
		_hitPoint -= amount;
		std::cout << ", his hit points are now " << _hitPoint << std::endl;
		if (_hitPoint == 0)
		{
			std::cout << _name << " died" << std::endl;
		}
	}
	else
		std::cout << _name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint > 0 && _energyPoints > 0)
	{
		std::cout << _name << " repair his hit points by " << amount << std::endl;
		_energyPoints--;
		_hitPoint += amount;
		std::cout << _name << " have " << _hitPoint << " of hit points now" << std::endl;
	}
	else
		std::cout << _name << " can't attack, he is dead or out of energy" << std::endl;
}
