#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:

	void	complain(std::string level);
	Harl();
	~Harl();

	private:

	void (Harl::*_ptr)();
	void debug();
	void info();
	void warning();
	void error();

};

#endif