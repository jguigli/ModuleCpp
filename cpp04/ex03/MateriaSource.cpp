#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Constructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& copie)
{
	std::cout << "Constructor copy MateriaSource called" << std::endl;
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

MateriaSource& MateriaSource::operator=(MateriaSource const &copie)
{
	std::cout << "Constructor assignement MateriaSource called" << std::endl;
	if (this != &copie)
	{
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

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			delete _items[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_items[i])
		{
			_items[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (_items[i])
			{
				if (_items[i]->getType() == "cure")
					return _items[i]->clone();
			}
		}
	}
	else if (type == "ice")
	{
		for (int i = 0; i < 4; i++)
		{
			if (_items[i])
			{
				if (_items[i]->getType() == "ice")
					return _items[i]->clone();
			}
		}
	}
	return 0;
}