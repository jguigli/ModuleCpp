#include "Base.hpp"

int main()
{
	Base *baseptr;

	baseptr = generate();
	identify(baseptr);
	identify(*baseptr);

	delete baseptr;
	return 0;
}