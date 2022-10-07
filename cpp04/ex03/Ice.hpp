#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"


class Ice : public AMateria
{
	public:

	Ice();
	Ice(std::string const & type);
	Ice(Ice const& copie);
	virtual Ice& operator=(Ice const &copie);
	virtual ~Ice();

	std::string const & getType() const;
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);


};

#endif