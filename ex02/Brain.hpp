#pragma once
#include <string>
#include <iostream>
#include <cstdlib>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain&);
		Brain& operator=(Brain&);
		void headtail();
		void setIdeas(std::string);
};

