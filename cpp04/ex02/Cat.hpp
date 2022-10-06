#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>


class Cat: public virtual Animal
{
	public:

	Cat();
	Cat(std::string name);
	Cat(Cat const& copie);
	Cat& operator=(Cat const &copie);
	virtual Animal& operator=(Animal const &copie);
	virtual ~Cat();

	void virtual makeSound() const;
	virtual Brain *getBrain() const;

	private:

	Brain *_brain;

};

#endif