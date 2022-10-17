#include "Converter.hpp"

Converter::Converter()
{
}

Converter::Converter(char *str) : _str(str)
{
	_valueTypeChar = 0;
	_valueTypeInt = 0;
	_valueTypeFloat = 0;
	_valueTypeDouble = 0;
}

Converter::Converter(Converter const& copie)
{
	*this = copie;
}

Converter& Converter::operator=(Converter const &copie)
{
	if (this != &copie)
	{
		
	}
	return *this;
}

Converter::~Converter()
{

}

const char* Converter::ImpossibleValue::what() const throw()
{
	return ("Impossible value : This value cannot be cast");
}

void Converter::execute()
{
	getType(_str);
	convertType();
	printChar();
	printInt();
	printFloat();
	printDouble();
}

bool Converter::getType(std::string &str)
{
	_type = specialValue(str);
	if (_type != Converter::_typeNot)
		return true;
	if (isAnInteger(str))
		_type = Converter::_typeInt;
	else if (isAChar(str))
		_type = Converter::_typeChar;
	else if (isAFloat(str))
		_type = Converter::_typeFloat;
	else if (isADouble(str))
		_type = Converter::_typeDouble;
	if (_type == Converter::_typeNot)
		throw Converter::ImpossibleValue();
	return true;
}

bool Converter::isAChar(std::string& str)
{
	if (str[0] > 31 && str[0] < 126 && !str[1])
		return true;
	return false;
}

bool Converter::isAnInteger(std::string& str)
{
	size_t i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool Converter::isAFloat(std::string& str)
{
	size_t i = 0;
	int dot = 0;
	int fflag = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && dot == 0 && isdigit(str[i + 1]))
				dot += 1;
			else if (str[i] == 'f' && fflag == 0)
				fflag += 1;
			else
				return false;
		}
	}
	if (dot == 0 || fflag == 0)
		return false;
	return true;
}

bool Converter::isADouble(std::string& str)
{
	size_t i = 0;
	int dot = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && dot == 0 && isdigit(str[i + 1]))
				dot += 1;
			else
				return false;
		}
	}
	if (dot == 0)
		return false;
	return true;
}

void Converter::convertType()
{
	switch (_type)
	{
	case _typeChar:
		_valueTypeChar = _str[0];
		break;
	case _typeInt:
		_valueTypeInt = atof(_str.c_str());
		break;
	case _typeFloat:
		_valueTypeFloat = atof(_str.c_str());
		break;
	case _typeDouble:
		_valueTypeDouble = atof(_str.c_str());
		break;
	default:
		break;
	}
}

void Converter::printChar()
{
	switch (_type)
	{
	case _typeChar:
		std::cout << "Char: " << _valueTypeChar << std::endl;
		break;
	case _typeInt:
		if (checkConvertChar(_valueTypeInt))
			std::cout << "Char: " << static_cast<char>(_valueTypeInt) << std::endl;
		break;
	case _typeFloat:
		if (checkConvertChar(_valueTypeFloat))
			std::cout << "Char: " << static_cast<char>(_valueTypeFloat) << std::endl;
		break;
	case _typeDouble:
		if (checkConvertChar(_valueTypeDouble))
			std::cout << "Char: " << static_cast<char>(_valueTypeDouble) << std::endl;
		break;
	default:
		break;
	}
}

void Converter::printInt()
{
	switch (_type)
	{
	case _typeChar:
		std::cout << "Int: " << static_cast<int>(_valueTypeChar) << std::endl;
		break;
	case _typeInt:
		if (checkConvertInt(_valueTypeInt))
			std::cout << "Int: " << static_cast<int>(_valueTypeInt) << std::endl;
		break;
	case _typeFloat:
		if (checkConvertInt(_valueTypeFloat))
			std::cout << "Int: " << static_cast<int>(_valueTypeFloat) << std::endl;
		break;
	case _typeDouble:
		if (checkConvertInt(_valueTypeDouble))
			std::cout << "Int: " << static_cast<int>(_valueTypeDouble) << std::endl;
		break;
	default:
		break;
	}
}

void Converter::printFloat()
{
	switch (_type)
	{
	case _typeChar:
		std::cout << "Float: " << static_cast<float>(_valueTypeChar) << ".0f" << std::endl;
		break;
	case _typeInt:
		if (checkConvertFloat(_valueTypeInt))
			std::cout << "Float: " << static_cast<float>(_valueTypeInt) << ".0f" << std::endl;
		break;
	case _typeFloat:
		if (checkConvertFloat(_valueTypeFloat))
			std::cout << "Float: " << static_cast<float>(_valueTypeFloat) << printZeroDoubleFloat(_valueTypeFloat) << "f" << std::endl;
		break;
	case _typeDouble:
		if (checkConvertFloat(_valueTypeDouble))
			std::cout << "Float: " << static_cast<float>(_valueTypeDouble) << printZeroDoubleFloat(static_cast<double>(_valueTypeDouble)) << "f" << std::endl;
		break;
	default:
		break;
	}
}

void Converter::printDouble()
{
	switch (_type)
	{
	case _typeChar:
		std::cout << "Double: " << static_cast<double>(_valueTypeChar) << ".0" << std::endl;
		break;
	case _typeInt:
		std::cout << "Double: " << static_cast<double>(_valueTypeInt) << ".0" << std::endl;
		break;
	case _typeFloat:
		std::cout << "Double: " << static_cast<double>(_valueTypeFloat) << printZeroDoubleFloat(static_cast<double>(_valueTypeFloat)) << std::endl;
		break;
	case _typeDouble:
		std::cout << "Double: " << _valueTypeDouble << printZeroDoubleFloat(_valueTypeDouble) << std::endl;
		break;
	default:
		break;
	}
}

const char * Converter::printZeroDoubleFloat(double n)
{
	if (n - static_cast<int>(n) == 0.0)
		return ".0";
	return "";
}

bool Converter::checkConvertChar(double n)
{
	if (n > 127 || n < 0 || n != n)
	{
		std::cout << "Char: Impossible" << std::endl;
		return false;
	}
	if (n < 32 || n > 126)
	{
		std::cout << "Char: Not displayable" << std::endl;
		return false;
	}
	return true;
}

bool Converter::checkConvertInt(double n)
{
	if (n != n || n > std::numeric_limits<int>::max() || n < std::numeric_limits<int>::min())
	{
		std::cout << "Int: Impossible" << std::endl;
		return false;
	}
	return true;
}

bool Converter::checkConvertFloat(double n)
{
	std::cout << "n = " << n << std::endl;
	std::cout << "max = " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "min = " << std::numeric_limits<float>::min() << std::endl;
	// if ((n > std::numeric_limits<float>::max() || n < std::numeric_limits<float>::min()))
	// {
	// 	std::cout << "Float: Impossible" << std::endl;
	// 	return false;
	// }
	// return true;
	if ((n <= std::numeric_limits<float>::max()
			&& n >= -std::numeric_limits<float>::max())
			|| n == std::numeric_limits<double>::infinity()
			|| n == -std::numeric_limits<double>::infinity()
			|| n == n)
	{
		return true;
	}
	return false;
}

int Converter::specialValue(std::string &str)
{
	std:: string floatSv[] = {"+inff", "-inff", "nanf"};
	std:: string doubleSv[] = {"+inf", "-inf", "nan"};

	for (int i = 0; i < 3; i++)
	{
		if (floatSv[i] == str)
			return Converter::_typeFloat;
		else if (doubleSv[i] == str)
			return Converter::_typeDouble;
	}
	return Converter::_typeNot;
}