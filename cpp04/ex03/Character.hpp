#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"


class Character : public ICharacter
{
	public:

	Character();
	Character(const std::string& name);
	Character(Character const& copie);
	virtual Character& operator=(Character const &copie);
	virtual ~Character();
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	private:

	std::string _name;
	AMateria *_items[4];
	AMateria *_drop[50];
};

#endif