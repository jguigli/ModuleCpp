#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(10);
	v.push_back(5);
	v.push_back(3);
	v.push_back(8);

	::easyfind(v, 5);
	::easyfind(v, 4);

	std::cout << std::endl;

	std::deque<int> d;

	d.push_back(10);
	d.push_front(5);
	d.push_back(3);
	d.push_front(8);

	::easyfind(d, 5);
	::easyfind(d, 4);

	std::cout << std::endl;

	std::list<int> l;

	l.push_back(10);
	l.push_back(5);
	l.push_back(3);
	l.push_back(8);

	::easyfind(l, 5);
	::easyfind(l, 4);

	std::cout << std::endl;

	return 0;
}