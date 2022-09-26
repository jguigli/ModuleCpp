#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde;

	zombieHorde = new(Zombie);
	for (int i = 0; i < N, i++)
	{
		zombieHorde[N]->setName(name);
	}
}