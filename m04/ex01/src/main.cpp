#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	{
		Animal *animals[10];
		Dog a;
		Dog b(a);

		for (int i=0;i<10;i++) {
			if (i < 5)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i=0;i<10;i++)
			delete animals[i];
	}
	{
		
	}
}