#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(10);
	v.push_back(5);
	v.push_back(3);
	v.push_back(8);

	::easyfind(v, 5);

	return 0;
}