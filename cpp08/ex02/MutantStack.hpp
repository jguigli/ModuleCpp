#ifndef MUTANTSTACK_HPP	
#define MUTANTSTACK_HPP

#include <iomanip>
#include <iostream>
#include <string.h>
#include <exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <list>
#include <typeinfo>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
		}

		MutantStack(const MutantStack<T>& copie)
		{
			*this = copie; 
		}

		MutantStack<T>& operator=(const MutantStack<T>& copie) 
		{
			if (this != &copie)
			{
				this->c = copie.c;
			}
			return *this;
		}

		~MutantStack()
		{
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		iterator end()
		{
			return std::stack<T>::c.end();
		}
};


#endif