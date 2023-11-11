#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "	(Cat default constructor) type: " << type << std::endl;
}

Cat::Cat(Cat& other)
{
	(void) other;
	std::cout << "	(Cat copy constructor) type: " << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "	(Cat destructor) type: " << type << std::endl;
}

Cat& Cat::operator=(Cat& rhs)
{
	std::cout << "	(Cat copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "🔊 Cat sound \"miau\"" << std::endl;
}
