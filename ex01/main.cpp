#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	test1()
{
	const int a = 2;
	Animal	*animals[a];

	for (int i = 0; i != a / 2; ++i)
		animals[i] = new Cat();
	for (int i = a / 2; i != a; ++i)
		animals[i] = new Dog();
	for(int i = 0; i != a ; ++i)
		delete animals[i];
}

void	test2()
{
	Dog	a;
	Dog	b;

	a.getBrain()->setIdea(std::string("a: how how 1"), 0);
	b.getBrain()->setIdea(std::string("b: how how 1"), 0);
	std::cout << a.getBrain()->getIdeas()[0] << std::endl;
	std::cout << b.getBrain()->getIdeas()[0] << std::endl;

	a = b;
	std::cout << a.getBrain()->getIdeas()[0] << std::endl;
	std::cout << b.getBrain()->getIdeas()[0] << std::endl;

	a.getBrain()->setIdea(std::string("a: new how how 1"), 0);
	std::cout << a.getBrain()->getIdeas()[0] << std::endl;
	std::cout << b.getBrain()->getIdeas()[0] << std::endl;
}

int main()
{
	//test1();
	test2();
}