#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap war("John");
	ScavTrap robot("Lucien");

	war.attack("the death soldier");
	war.takeDamage(3);
	war.beRepaired(5);
	war.takeDamage(12);
	war.beRepaired(5);

	robot.guardGate();
	robot.takeDamage(5);
	
	return 0;
}