#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(Brain const& copie)
{
	std::cout << "Constructor copy Brain called" << std::endl;
	*this = copie;
}

Brain& Brain::operator=(Brain const &copie)
{
	std::cout << "Copy assignement Brain called" << std::endl;
	if (this != &copie)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copie._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}