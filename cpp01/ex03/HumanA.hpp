#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

	public:

	HumanA(std::string name, Weapon &weapon);
	HumanA(void);
	~HumanA(void);
	
	void	attack(void);

	private:

	Weapon &_weapon;
	std::string _name;
};

#endif