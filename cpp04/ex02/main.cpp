#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//AAnimal super;
	//AAnimal* super = new Animal(); 
	AAnimal* listOfAnimals[10];
	Brain *brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			listOfAnimals[i] = new Dog();
		else
			listOfAnimals[i] = new Cat();
		std::cout << listOfAnimals[i]->getType() << std::endl;
	}
	brain = listOfAnimals[3]->getBrain();
	brain->_ideas[0] = "Salut toi";
	brain->_ideas[1] = "Hello you";
	brain->_ideas[2] = "Hola tù";

	std::cout << brain->_ideas[0] << "\n" << brain->_ideas[1] << "\n" << brain->_ideas[2] << std::endl;

	*(listOfAnimals[6]) = *(listOfAnimals[3]);

	brain = listOfAnimals[6]->getBrain();

	std::cout << brain->_ideas[0] << "\n" << brain->_ideas[1] << "\n" << brain->_ideas[2] << std::endl;

	for (int i = 0; i < 10; i++)
		delete listOfAnimals[i];
	
	return 0;
}