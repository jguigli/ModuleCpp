#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	public:

	MateriaSource();
	MateriaSource(MateriaSource const& copie);
	virtual MateriaSource& operator=(MateriaSource const &copie);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

	private:

	AMateria *_items[4];
};

#endif