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

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Assignment Cat" << std::endl;
	Animal::operator=(rhs);
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

