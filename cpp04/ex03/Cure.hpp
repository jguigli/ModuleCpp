#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"


class Cure : public AMateria
{
	public:

	Cure();
	Cure(std::string const & type);
	Cure(Cure const& copie);
	virtual Cure& operator=(Cure const &copie);
	virtual ~Cure();

	std::string const & getType() const;
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);


};

#endif