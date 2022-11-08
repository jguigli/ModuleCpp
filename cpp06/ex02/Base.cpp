#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base * generate(void)
{
	srand((unsigned int)time(0));
	int val = rand();
	switch (val % 3)
	{
	case 0:
		std::cout << "Generate an A class" << std::endl;
		return new A();
		break;
	case 1:
		std::cout << "Generate a B class" << std::endl;
		return new B();
		break;
	case 2:
		std::cout << "Generate a C class" << std::endl;
		return new C();
		break;
	default:
		break;
	}
	return NULL;
}

void identify(Base* p)
{
	A *aptr;
	B *bptr;
	C *cptr;

	aptr = dynamic_cast<A *>(p);
	if (aptr)
	{
		std::cout << "Type of the object pointed to by p : < A >" << std::endl;
		return;
	}
	bptr = dynamic_cast<B *>(p);
	if (bptr)
	{
		std::cout << "Type of the object pointed to by p : < B >" << std::endl;
		return;
	}
	cptr = dynamic_cast<C *>(p);
	if (cptr)
	{
		std::cout << "Type of the object pointed to by p : < C >" << std::endl;
		return;
	}
}

void identify(Base& p)
{
	try
	{
		A &aptr = dynamic_cast<A &>(p);
		std::cout << "Type of the object referenced in p : < A >" << std::endl;
		(void)aptr;
		return;
	}
	catch(const std::bad_cast &bc)
	{
	}
	
	try
	{
		B &bptr = dynamic_cast<B &>(p);
		std::cout << "Type of the object referenced in p : < B >" << std::endl;
		(void)bptr;
		return;
	}
	catch(const std::bad_cast &bc)
	{
	}

	try
	{
		C &cptr = dynamic_cast<C &>(p);
		std::cout << "Type of the object referenced in p : < C >" << std::endl;
		(void)cptr;
		return;
	}
	catch(const std::bad_cast &bc)
	{
	}

}