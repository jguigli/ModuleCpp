#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"


class Character : public ICharacter
{
	public:

	Character();
	Character(const std::string& name);
	virtual ~Character() {}
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	const std::string& getName() const;

	private:

	std::string _name;
	static int _indexItem;
	AMateria *items[4];
	AMateria *dropItems[4];
};

#endif