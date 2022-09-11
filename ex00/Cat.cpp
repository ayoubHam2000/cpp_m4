#include "Cat.hpp"

Cat::Cat()
{
	_type = std::string("Cat");
	std::cout << "Construct Cat" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Copy Constructor Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &lhs)
{
	std::cout << "Assignment Cat" << std::endl;
	Animal::operator=(lhs);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat makes sound" << std::endl;
}

