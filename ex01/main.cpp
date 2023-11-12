#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define ARRSIZE 3

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
	std::cout << std::endl;
}

void WrongProvidedTests()
{
	std::cout << "===========================" << std::endl;
	std::cout << "Wrong Provided Tests (PDF):" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the Animal sound!
		meta->makeSound();

		delete meta;
		delete i;
	}
	std::cout << std::endl;
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
	std::cout << std::endl;
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
		const Cat c3(c2);
		c3.makeSound();
	}
	std::cout << std::endl;
}

void WrongCatTests()
{
	std::cout << "==============" << std::endl;
	std::cout << "WrongCat Tests" << std::endl;
	{
		WrongCat wc1;
		wc1.makeSound();
		WrongCat wc2(wc1);
		wc2 = wc1;
		const WrongCat wc3(wc2);
		wc3.makeSound();
	}
	std::cout << std::endl;
}

void DogTests()
{
	std::cout << "=========" << std::endl;
	std::cout << "Dog Tests" << std::endl;
	{
		Dog d1;
		d1.makeSound();
		Dog d2(d1);
		d2 = d1;
		const Dog d3(d2);
		d3.makeSound();
	}
	std::cout << std::endl;
}

void ArrayTest()
{
	{
		std::cout << "=== CREATING ARRAY ===" << std::endl;
		Animal* arr[2 * ARRSIZE];
		for (int i = 0; i < ARRSIZE; i++)
		{	
			arr[i] = new Dog();
		}
		for (int i = ARRSIZE; i < 2 * ARRSIZE; i++)
		{	
			arr[i] = new Cat();
		}

		std::cout << "=== DELETING ARRAY ===" << std::endl;

		for (int i = 0; i < 2 * ARRSIZE; i++)
		{	
			delete arr[i];
		}
	}
}

void CatBrainTest()
{
	{
		Cat c1;
		c1.info();
		std::cout << "c1 info =========" << std::endl;
		{
			Cat c2;
			c2.setBrain("example_idea");
			c1 = c2;
		}
		std::cout << "c1 info =========" << std::endl;
		c1.info();
		Cat c3(c1);
		std::cout << "c3 info =========" << std::endl;
		c3.info();
	}
}

void DogBrainTest()
{
	{
		Dog c1;
		c1.info();
		std::cout << "c1 info =========" << std::endl;
		{
			Dog c2;
			c2.setBrain("example_idea");
			c1 = c2;
		}
		std::cout << "c1 info =========" << std::endl;
		c1.info();
		Dog c3(c1);
		std::cout << "c3 info =========" << std::endl;
		c3.info();
	}
}

void DeepCopyTest()
{
	{
		Cat* c4 = new Cat;
		Cat* c5 = new Cat;
		c4->setBrain("IDEAc4");
		c5->setBrain("IDEAc5");
		*c5 = *c4;
		delete c4;
		c5->info();
	}
}

	// ProvidedTests();
	// AnimalTests();
	// CatTests();
	// DogTests();
	// WrongCatTests();
	// WrongProvidedTests();



int main()
{
	ArrayTest();
	CatBrainTest();
	DogBrainTest();
}