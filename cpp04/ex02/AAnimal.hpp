#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"


class AAnimal
{
	public:

	AAnimal();
	AAnimal(std::string name);
	AAnimal(AAnimal const& copie);
	virtual AAnimal& operator=(AAnimal const &copie);
	virtual ~AAnimal();

	const std::string &getType() const;
	void virtual makeSound() const = 0;
	virtual Brain *getBrain() const = 0;

	protected:

	std::string _type;

};

#endif