#include "Harl.hpp"

Harl::Harl() : _index(-1)
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (level == "")
	{
		std::cout << "Invalid command" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (level == array[i])
		{	
			_index = i;
			break ;
		}
	}
	switch (_index)
	{
		case (0):
		{
			debug();
		}
		case (1):
		{
			info();
		}
		case (2):
		{
			warning();
		}
		case (3):
		{
			error();
			break ;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\n" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout <<  "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}