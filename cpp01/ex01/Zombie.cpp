#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(std::string name) const
{
	return (this->_name);
}

bool	Zombie::setName(std::string name)
{
	if (name == "")
		return (false);
	this->_name = name;
	return (true);
}