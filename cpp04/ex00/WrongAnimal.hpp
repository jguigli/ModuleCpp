#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>


class WrongAnimal
{
	public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const& copie);
	WrongAnimal& operator=(WrongAnimal const &copie);
	virtual ~WrongAnimal();

	std::string getType() const;
	void makeSound() const;

	protected:

	std::string _type;

};

#endif