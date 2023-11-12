#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	brain = new Brain();
	std::cout << "	(🐕Dog default constructor) type: " << type << std::endl;
}

Dog::Dog(Dog& other)
{
	this->type = other.type;
	brain = new Brain();
	*brain = *(other.brain);
	std::cout << "	(🐕Dog copy constructor) type: " << type << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "	(🐕Dog destructor) type: " << type << std::endl;
}

Dog& Dog::operator=(Dog& rhs)
{
	std::cout << "	(🐕Dog copy assignemnt operator) type: " << type << std::endl;
	this->type = rhs.type;
	*brain = *(rhs.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "🔊 Dog sound \"woof\"" << std::endl;
}

void Dog::info()
{
	brain->headtail();
}

void Dog::setBrain(std::string str)
{
	brain->setIdeas(str);
}
