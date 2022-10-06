#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>


class WrongCat: public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(std::string name);
	WrongCat(WrongCat const& copie);
	WrongCat& operator=(WrongCat const &copie);
	virtual ~WrongCat();

	void makeSound() const;

};

#endif