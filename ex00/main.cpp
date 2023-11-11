#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void ProvidedTests()
{
	std::cout << "=====================" << std::endl;
	std::cout << "Provided Tests (PDF):" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
}

void AnimalTests()
{
	std::cout << "=============" << std::endl;
	std::cout << "Animal Tests:" << std::endl;
	{
		{
			// Basic orthodox canonical from tests
			std::cout << "Testing orthodox canonical form of Animal Class" << std::endl;
			Animal a1;
			Animal a2(a1);
			a1 = a2;
			Animal a3("TYPEA_A3");
			a1 = a2 = a3;
		}
		{
			// Testing const string
			const std::string str = "CONSTSTRTYPE_A4";
			Animal a4(str);
		}
		{
			// Testing self assignment
			Animal a5("TYPE_A5");
			void *ptr = &a5;
			a5 = *(Animal*)(ptr);
		}
		{
			// Testing copy costructor
			Animal a6("A6");
			Animal a7(a6);
		}
		{
			Animal a8;
			a8.makeSound();
		}
	}
}

void CatTests()
{
	std::cout << "=========" << std::endl;
	std::cout << "Cat Tests" << std::endl;
	{
		Cat c1;
		c1.makeSound();
		Cat c2(c1);
		c2 = c1;
	}
}

int main()
{
	ProvidedTests();
	AnimalTests();
	CatTests();
	std::cout << std::endl;
}