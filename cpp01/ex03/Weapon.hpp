#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"



class Weapon 
{

private:
	std::string _type;

public:
	const std::string& getType(void) const;
	void	setType(std::string value);

	Weapon(void);
	Weapon(std::string name);
	Weapon operator=(const Weapon& lhs);

	~Weapon(void);

};




#endif