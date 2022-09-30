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

	int	_index;
	void debug();
	void info();
	void warning();
	void error();

};

#endif