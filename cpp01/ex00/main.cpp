#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Create zombie with simple Class on the stack\n";
	Zombie	simpleZombie("Paul le tueur");
	simpleZombie.announce();

	std::cout << "Create zombie with allocation on the heap\n";
	Zombie *allocZombie = newZombie("Pierre le découpeur");
	allocZombie->announce();
	delete allocZombie;

	std::cout << "Create random zombie on the stack\n";
	randomChump("Jacky l'éventreur");
	return 0;
}