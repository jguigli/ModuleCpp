#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>


class Cat: public virtual Animal
{
	public:

	Cat();
	Cat(Cat const& copie);
	Cat& operator=(Cat const &copie);
	virtual ~Cat();

	void virtual makeSound() const;

};

#endif