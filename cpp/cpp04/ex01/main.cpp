#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
{
	Animal* animal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		animal[i]->makeSound();
		delete animal[i];
	}
}
std::cout << "------------------------" << std::endl;

Dog basic;
{
Dog tmp = basic;
}
}


// deleting object of polymorphic class type  
// Animal’ which has non-virtual destructor might cause undefined behavior