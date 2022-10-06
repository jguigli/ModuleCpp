#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	ScavTrap scav("Lucien");

	std::cout << "\nCLAPTRAP TEST" << std::endl;
	clap.attack("the frost soldier");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap.takeDamage(12);
	clap.beRepaired(5);

	std::cout << "\nSCAVTRAP TEST" << std::endl;
	scav.guardGate();
	scav.attack("the fire soldier");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.takeDamage(12);
	scav.beRepaired(5);

	std::cout << std::endl;

	return 0;
}