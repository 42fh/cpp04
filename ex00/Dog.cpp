#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "	(Dog default constructor) type: " << type << std::endl;
}

Dog::Dog(Dog& other)
{
	(void) other;
	std::cout << "	(Dog copy constructor) type: " << type << std::endl;
}

Dog::~Dog()
{
	std::cout << "	(Dog destructor) type: " << type << std::endl;
}

Dog& Dog::operator=(Dog& rhs)
{
	std::cout << "	(Dog copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "🔊 Dog sound \"woof\"" << std::endl;
}
