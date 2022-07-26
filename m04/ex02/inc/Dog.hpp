#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog &old);
		Dog &operator=(Dog &old);
		void makeSound(void) const;
		virtual ~Dog();
	private:
		Brain *b;
};

#endif