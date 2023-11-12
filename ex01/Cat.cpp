#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "	(🐱Cat default constructor) type: " << type << std::endl;
}

Cat::Cat(Cat& other)
{
	this->type = other.type;
	brain = new Brain();
	*brain = *(other.brain);
	std::cout << "	(🐱Cat copy constructor) type: " << type << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "	(🐱Cat destructor) type: " << type << std::endl;
}

Cat& Cat::operator=(Cat& rhs)
{
	std::cout << "	(🐱Cat copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	*brain = *(rhs.brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "🔊 Cat sound \"miau\"" << std::endl;
}

void Cat::info()
{
	brain->headtail();
}

void Cat::setBrain(std::string str)
{
	brain->setIdeas(str);
}