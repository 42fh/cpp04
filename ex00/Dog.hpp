#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog&);
		~Dog();
		Dog& operator=(Dog&);
		void makeSound() const;
};
