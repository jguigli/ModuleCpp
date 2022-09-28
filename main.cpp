#include <iostream>



using namespace std;

class Human;
void print_human_name(Human *human);

class Human
{

string _name;
int* _a = NULL;

public:

	Human(): _name("Arthur") 
	{
		_a = new int (10);
		print_human_name(this);
	}

	Human(string name): _name(name)
	{
		print_human_name(this);
	}

	Human(const Human& human)
	{
		_name = human.getName();
	} 

	const std::string& getName() const
	{
		return _name;
	}

	void setName(const string& name)
	{
		_name = name;
	}

	void operator=(const Human& lhs)
	{
		setName(lhs.getName());
	}

	~Human()
	{
		if (_a)
		{
			cout << *_a << endl;
			delete _a;
		}
		cout << "cioa" << endl;
	}

};

void print_human_name(Human *human)
{
	const std::string& ref = human->getName();
	cout << human->getName() << endl;
}

int main()
{
	Human c;
	Human b("william");
	Human a(b);


	int i = 0;

	while (i < 100000000) {
		cout << "Hello zorld" << endl;
		i++ ;
	}
	return (0);
}