#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>


class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& copie);
	ClapTrap& operator=(ClapTrap const &copie);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:

	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

};

#endif