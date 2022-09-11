#include "Dog.hpp"

Dog::Dog()
{
	_type = std::string("Dog");
	std::cout << "Construct Dog" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Copy Constructor Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &lhs)
{
	std::cout << "Assignment Dog" << std::endl;
	Animal::operator=(lhs);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound" << std::endl;
}

