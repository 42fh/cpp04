#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string);
		Animal(const Animal&);
		virtual ~Animal();
		Animal& operator=(Animal&);
		std::string getType() const;
		virtual void makeSound() const = 0;
};
