#include "ManageFile.hpp"

Stringreplace::Stringreplace()
{
}

Stringreplace::~Stringreplace()
{
}

bool	Stringreplace::openFile(const std::string &filename)
{
	if (_inputFile.is_open())
		_inputFile.close();
	if (filename == "")
	{
		std::cout << "File must exist" << std::endl;
		return (false);
	}
	_inputFile.open(filename.c_str());
	if (_inputFile)
	{
		_fileName = filename;
		_content.assign((std::istreambuf_iterator<char>(_inputFile)), std::istreambuf_iterator<char>());
		_inputFile.close();
		return (true);
	}
	else
	{
		std::cerr << "Can't open the input file" << std::endl;
		return (false);
	}
}

bool	Stringreplace::replace(std::string s1, std::string s2)
{
	size_t	lengthToReplace = s1.length();

	if (s1 == "" || s2 == "")
	{
		std::cout << "String must exist" << std::endl;
		return (false);
	}
	for (size_t i = 0; i < _content.length(); i++)
	{
		if (_content.compare(i, lengthToReplace, s1) == 0)
		{
			_content.erase(i, lengthToReplace);
			_content.insert(i, s2);
		}
	}
	copyToReplace();
	return (true);
}

void	Stringreplace::copyToReplace()
{
	std::ofstream outputFile;
	std::string nameOutputFile = _fileName;
	nameOutputFile += ".replace";
	outputFile.open(nameOutputFile.c_str());
	outputFile << _content;
}
