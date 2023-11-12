#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat&);
		~WrongCat();
		WrongCat& operator=(WrongCat&);
		void makeSound() const;
};
