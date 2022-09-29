#include "ManageFile.hpp"
#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	Stringreplace Sed;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	if (Sed.openFile(argv[1]) == false)
	{
		std::cerr << "Usage : ./filestream \"filename\" \"string to replace\" \'string replacement\"" << std::endl;
		return (-1);
	}
	if (Sed.replace(argv[2], argv[3]) == false)
	{
		std::cerr << "Usage : ./filestream \"filename\" \"string to replace\" \"string replacement\"" << std::endl;
		return (-1);
	}
	return 0;
}