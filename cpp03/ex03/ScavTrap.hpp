#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class ScavTrap : public virtual ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& copie);
	ScavTrap& operator=(ScavTrap const &copie);
	~ScavTrap();

	void guardGate();

	void attack(const std::string& target);

	private:

};

#endif