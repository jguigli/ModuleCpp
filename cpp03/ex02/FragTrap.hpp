#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class FragTrap: public ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& copie);
	FragTrap& operator=(FragTrap const &copie);
	~FragTrap();

	void highFivesGuys();

	private:

};

#endif