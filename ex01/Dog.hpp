#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(Dog&);
		~Dog();
		Dog& operator=(Dog&);
		void makeSound() const;
		void info();
		void setBrain(std::string);
};
