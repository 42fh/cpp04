#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "	(WrongCat default constructor) type: " << type << std::endl;
}

WrongCat::WrongCat(WrongCat& other)
{
	this->type = other.type;
	std::cout << "	(WrongCat copy constructor) type: " << type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "	(WrongCat destructor) type: " << type << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& rhs)
{
	std::cout << "	(WrongCat copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "🔊 WrongCat sound \"miau\"" << std::endl;
}
