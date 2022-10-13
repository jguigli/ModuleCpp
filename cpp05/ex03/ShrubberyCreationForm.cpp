#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copie) : Form("ShrubberyCreationForm", 145, 137), _target(copie.getTarget())
{
	*this = copie;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copie)
{
	if (this != &copie)
	{
		_target = copie.getTarget();
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream outputFile;
	std::string file = _target + "_shrubbery";

	if (checkExec(executor))
	{
		outputFile.open(file.c_str());
		outputFile << "                  __..-----')" << "\n";
		outputFile << "        ,.--._ .-'_..--...-'" << "\n";
		outputFile << "       '-\"'. _/_ /  ..--''""'-." << "\n";
		outputFile << "       _.--""...:._:(_ ..:\"::.. \\" << "\n";
		outputFile << "    .-' ..::--""_(##)#)\"':. \\ \\) " << "\n";
		outputFile << "   /_:-:'/  :__(##)##)    ): )" << "\n";
		outputFile << "   \"  / |  :' :/""\\///)  /:.'" << "\n";
		outputFile << "     / :( :( :(   (#//)  \"" << "\n";
		outputFile << "    / :/|\\ :\\_:\\   \\#//\\" << "\n";
		outputFile << "    |:/ | ""--':\\     (#//)" << "\n";
		outputFile << "    \\/  \\ :|  \\ :\\  (#//)" << "\n";
		outputFile << "         \\:\\   '.':. \\#//\\" << "\n";
		outputFile << "          ':|    \"--'(#///)" << "\n";
		outputFile << "                     (#///)" << "\n";
		outputFile << "                      \\#///\\" << "\n";
		outputFile << "                      (##///)" << "\n";
	}
	else
		throw ShrubberyCreationForm::NotSignException();
}

std::ostream& operator<<(std::ostream &flux, ShrubberyCreationForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}