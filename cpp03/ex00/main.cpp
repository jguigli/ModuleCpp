#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap war("John");

	war.attack("the death soldier");
	war.takeDamage(3);
	war.beRepaired(5);
	war.takeDamage(12);
	war.beRepaired(5);
	
	return 0;
}