#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage : ./converter [value to cast]" << std::endl; 
	}
	else
	{
		try
		{
			Converter convert(argv[1]);
			convert.execute();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return 1;
		}
	}
	return 0;
}