#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "Idea i =   ";
		ideas[i][9] = '0' + (i/10 % 10);
		ideas[i][10] = '0' + (i % 10);
	}
	std::cout << "	(Brain default constructor)" << std::endl;
}

Brain::~Brain()
{
	std::cout << "	(Brain destructor)" << std::endl;
}

Brain::Brain(Brain& other)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
	std::cout << "	(Brain copy constructor)" << std::endl;
}

Brain& Brain::operator=(Brain& rhs)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = rhs.ideas[i];
	}
	std::cout << "	(Brain copy assignment operator)" << std::endl;
	return rhs;
}

void Brain::headtail()
{
	std::cout << "Showing 2 first and last entries of brain ideas: " << std::endl
		<< "		  1. " << ideas[0] << std::endl 
		<< "		  2. " << ideas[1] << std::endl 
		<< "		 99. " << ideas[98] << std::endl 
		<< "		100. " << ideas[99] << std::endl;

}

void  Brain::setIdeas(std::string str)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = str;
	}
}