#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon {

	public:

	std::string &const getType(void);
	void	setType(std::string value);

	Weapon(std::string name);
	~Weapon(void);

	private:

	std::string type;
};

#endif