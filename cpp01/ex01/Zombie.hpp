#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:

	void	announce(void);
	bool    setName(std::string name);
	std::string    getName() const;
	
	Zombie(void);
	~Zombie(void);

	private:

	std::string	_name;
};

	Zombie* newZombie( std::string name );
	Zombie* zombieHorde( int N, std::string name );
	
#endif