#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage : ./converter [value to cast]" << std::endl; 
	}
	else
	{
		Converter convert(argv[1]);
		convert.execute();
	}


	return 0;
}