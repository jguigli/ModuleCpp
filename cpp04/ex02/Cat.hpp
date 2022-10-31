#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include <iostream>
#include <string>


class Cat: public virtual AAnimal
{
	public:

	Cat();
	Cat(Cat const& copie);
	Cat& operator=(Cat const &copie);
	virtual AAnimal& operator=(AAnimal const &copie);
	virtual ~Cat();

	void virtual makeSound() const;
	virtual Brain *getBrain() const;

	private:

	Brain *_brain;

};

#endif