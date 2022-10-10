#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:

	void	announce(void);
	std::string    getName() const;
	
	Zombie(std::string name);
	~Zombie(void);

	private:

	std::string	_name;
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif