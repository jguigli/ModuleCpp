#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {

	public:

	HumanB(std::string name);
	HumanB(void);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& weapon);
	Weapon&	getWeapon(void) const;

	private:

	Weapon* _weapon;
	std::string _name;
};

#endif