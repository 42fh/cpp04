#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "	(Animal default constructor) type: " << type << std::endl;
}

Animal::Animal(const std::string str): type(str)
{
	std::cout << "	(Animal const string constructor) type: " << type << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "	(Animal copy constructor) type: " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "	(Animal destructor) type: " << type << std::endl;
}

Animal& Animal::operator=(Animal& rhs)
{
	std::cout << "	(Animal copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "🔊 Generic Animal sound" << std::endl;
}