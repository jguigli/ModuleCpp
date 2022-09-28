#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>


class Weapon 
{

	private:

	std::string _type;

	public:

	Weapon(void);
	Weapon(std::string name);
	Weapon operator=(const Weapon& lhs);
	~Weapon(void);
	
	const std::string& getType(void) const;
	void	setType(std::string value);

};

#endif