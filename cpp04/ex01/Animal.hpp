#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"


class Animal
{
	public:

	Animal();
	Animal(Animal const& copie);
	virtual Animal& operator=(Animal const &copie);
	virtual ~Animal();

	const std::string &getType() const;
	void virtual makeSound() const;
	virtual Brain *getBrain() const = 0;

	protected:

	std::string _type;

};

#endif