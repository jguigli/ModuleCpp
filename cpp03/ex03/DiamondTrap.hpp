#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>


class DiamondTrap: public FragTrap, public ScavTrap
{
	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& copie);
	DiamondTrap& operator=(DiamondTrap const &copie);
	~DiamondTrap();

	void attack(const std::string& target);
	void whoAmI();

	private:
	
	std::string _name;

};

#endif