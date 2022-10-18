#ifndef DATA_HPP
#define DATA_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include <stdint.h>

struct Data 
{
	std::string waouh;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif