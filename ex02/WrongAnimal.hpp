#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string);
		WrongAnimal(const WrongAnimal&);
		~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal&);
		std::string getType() const;
		void makeSound() const;
};
