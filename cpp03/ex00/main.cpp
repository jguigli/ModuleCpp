#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");

	std::cout << "\nCLAPTRAP TEST" << std::endl;
	clap.attack("the frost soldier");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap.takeDamage(12);
	clap.beRepaired(5);

	std::cout << std::endl;
	
	return 0;
}