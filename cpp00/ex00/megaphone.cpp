#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string str;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int y = 0; argv[i][y]; y++)
				str += (char)toupper(argv[i][y]);
		}
		std::cout << str << std::endl;
	}
	return 0;
}