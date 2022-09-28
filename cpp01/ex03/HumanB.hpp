#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {

	public:

	void	attack(void);
	void	setWeapon(Weapon weapon);

	HumanB(std::string name);
	HumanB(void);
	~HumanB(void);

	private:

	Weapon _weapon;
	std::string _name;
};

#endif