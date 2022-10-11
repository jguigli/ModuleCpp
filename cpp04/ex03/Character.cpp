#include "Character.hpp"

Character::Character()
{
	std::cout << "Constructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
	for (int i = 0; i < 50; i++)
		_drop[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "Constructor name Character called" << std::endl;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
	for (int i = 0; i < 50; i++)
		_drop[i] = NULL;
}

Character::Character(Character const& copie)
{
	std::cout << "Constructor copy Character called" << std::endl;
	_name = copie._name;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
		{
			delete _items[i];
			_items[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (copie._items[i])
			_items[i] = copie._items[i]->clone();
	}
}

Character& Character::operator=(Character const &copie)
{
	std::cout << "Copy assignement Character called" << std::endl;
	if (this != &copie)
	{
		_name = copie._name;
		for (int i = 0; i < 4; i++)
		{
			if (_items[i])
			{
				delete _items[i];
				_items[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (copie._items[i])
				_items[i] = copie._items[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			delete _items[i];
	}
	for (int i = 0; i < 50; i++)
	{
		if (_drop[i])
			delete _drop[i];
	}
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_items[i])
		{
			_items[i] = m;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 50; i++)
	{
		if (!_drop[i])
		{
			_drop[i] = _items[idx];
			break;
		}
	}
	_items[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_items[idx])
		_items[idx]->use(target);
}