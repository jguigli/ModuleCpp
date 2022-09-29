#ifndef MANAGEFILE_HPP
#define MANAGEFILE_HPP

#include <string>
#include <iostream>
#include <fstream>

class Stringreplace
{
	public:

	Stringreplace();
	~Stringreplace();
	bool	openFile(std::string filename);
	bool	replace(std::string s1, std::string s2);
	void	copyToReplace();

	private:

	std::string _fileName;
	std::string _content;
	std::ifstream _inputFile;
};

#endif