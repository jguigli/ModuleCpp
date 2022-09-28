#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "Adresse de la string : " << &str
			<< "\nAdresse de la string stockée dans le pointeur : " << &stringPTR
			<< "\nAdresse de la string stockée dans la référence : " << &stringREF;

	std::cout << "\n\nValeur de la string : " << str
			<< "\nValeur de la string stockée dans le pointeur : " << *stringPTR
			<< "\nValeur de la string stockée dans la référence : " << stringREF << std::endl;
	return 0;
}