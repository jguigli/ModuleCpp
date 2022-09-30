#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	Harl ceBonVieuxHarl;

	if (argc != 2)
	{
		std::cout << "Usage : ./harl \"command\"" << std::endl;
		return -1;
	}
	ceBonVieuxHarl.complain(argv[1]);
	return 0;
}