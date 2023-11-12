#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(Cat&);
		~Cat();
		Cat& operator=(Cat&);
		void makeSound() const;
		void info();
		void setBrain(std::string);
};
