#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	public:

	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const& copie);
	virtual AMateria& operator=(AMateria const &copie);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;


	protected:

	std::string _type;

};

#endif