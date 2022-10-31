#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>


class Dog: public virtual Animal
{
	public:

	Dog();
	Dog(Dog const& copie);
	Dog& operator=(Dog const &copie);
	virtual Animal& operator=(Animal const &copie);
	virtual ~Dog();

	void virtual makeSound() const;
	virtual Brain *getBrain() const;

	private:

	Brain *_brain;

};

#endif