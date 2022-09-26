#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
	public:

	void	announce(void);
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );
	void    setName(std::string name);
	
	Zombie(void);
	~Zombie(void);

	private:

	std::string	_name;
};

#endif