#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstdlib>

class Converter
{
	public:

	Converter(char *str);
	Converter(const Converter &copie);
	Converter& operator=(Converter const &copie);

	~Converter();
	void execute();

	class ImpossibleValue : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};


	private:
	
	Converter();

	int specialValue(std::string &str);
	bool getType(std::string &str);
	void convertType();
	bool isAChar(std::string& str);
	bool isAnInteger(std::string& str);
	bool isAFloat(std::string& str);
	bool isADouble(std::string& str);
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	const char *printZeroDoubleFloat(double n);
	bool checkConvertChar(double n);
	bool checkConvertInt(double n);

	std::string _str;
	int _type;

	char _valueTypeChar;
	int _valueTypeInt;
	float _valueTypeFloat;
	double _valueTypeDouble;

	static const int _typeChar = 1;
	static const int _typeInt = 2;
	static const int _typeFloat = 3;
	static const int _typeDouble = 4;
	static const int _typeNot = 0;

};


#endif