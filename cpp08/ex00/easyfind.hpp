#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iomanip>
#include <iostream>
#include <string.h>
#include <exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <typeinfo>

template < typename T >
int easyfind(T & a, int nb)
{
	typename T::iterator it;
	it = find(a.begin(), a.end(), nb);
	if (it != a.end())
		std::cout << "Element " << nb << " trouvé dans le container" << std::endl;
	else
		std::cout << "Element " << nb << " n'a pas été trouvé dans le container" << std::endl;
	return 0;
}

#endif