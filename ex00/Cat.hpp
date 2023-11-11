#pragma once
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat&);
		~Cat();
		Cat& operator=(Cat&);
		void makeSound() const;
};
