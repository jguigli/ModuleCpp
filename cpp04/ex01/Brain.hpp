#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>


class Brain
{
	public:

	Brain();
	Brain(Brain const& copie);
	Brain& operator=(Brain const &copie);
	virtual ~Brain();

	std::string _ideas[100];
};

#endif