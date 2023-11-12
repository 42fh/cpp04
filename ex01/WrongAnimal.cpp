#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "	(WrongAnimal default constructor) type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string str): type(str)
{
	std::cout << "	(WrongAnimal const string constructor) type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "	(WrongAnimal copy constructor) type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "	(WrongAnimal destructor) type: " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& rhs)
{
	std::cout << "	(WrongAnimal copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "🔊 Generic WrongAnimal sound" << std::endl;
}