#include "iter.hpp"

int main( void ) 
{
	int sizeArray = 5;
	int array[sizeArray];

	for (int i = 0; i < sizeArray; i++)
	{
		array[i] = 1 * i;
	}

	std::cout << "Array before changes" << std::endl;
	::iter(array, sizeArray, ::valDisplay);

	for (int i = 0; i < sizeArray; i++)
	{
		array[i] = 2 * i;
	}

	std::cout << "Array after changes" << std::endl;
	::iter(array, sizeArray, ::valDisplay);

	
	return 0;
}