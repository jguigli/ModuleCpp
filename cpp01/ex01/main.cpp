#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		nbZombie = 10;

	std::cout << "Create a zombie Horde with function\n";
	horde = zombieHorde(nbZombie, "Johnny");
	for (int i = 0; i < nbZombie; i++)
	{
		std::cout << "Zombie " << i + 1 << "\n";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}