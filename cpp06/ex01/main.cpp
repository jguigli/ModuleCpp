#include "Data.hpp"

int main()
{
	Data data;
	uintptr_t val;
	Data *recup;

	std::cout << "Adress before serialization : " << &data << std::endl;
	val = serialize(&data);
	recup = deserialize(val);
	std::cout << "Adress after serialization  : " << recup << std::endl;
	return 0;
}