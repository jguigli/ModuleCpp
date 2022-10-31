#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include <iostream>
#include <string>


class Dog: public virtual AAnimal
{
	public:

	Dog();
	Dog(Dog const& copie);
	Dog& operator=(Dog const &copie);
	virtual AAnimal& operator=(AAnimal const &copie);
	virtual ~Dog();

	void virtual makeSound() const;
	virtual Brain *getBrain() const;

	private:

	Brain *_brain;

};

#endif