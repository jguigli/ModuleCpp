#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>


class Animal
{
	public:

	Animal();
	Animal(std::string name);
	Animal(Animal const& copie);
	Animal& operator=(Animal const &copie);
	virtual ~Animal();

	std::string getType() const;
	void virtual makeSound() const;

	protected:

	std::string _type;

};

#endif