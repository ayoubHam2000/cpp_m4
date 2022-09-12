#include "Dog.hpp"

Dog::Dog()
{
	_type = std::string("Dog");
	_brain = new Brain();
	std::cout << "Construct Dog" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	_brain = new Brain();
	*_brain = *other._brain;
	std::cout << "Copy Constructor Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	*this->_brain = *rhs._brain;
	std::cout << "Assignment Dog" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor Dog" << std::endl;
}

Brain *Dog::getBrain() const
{
	return _brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound" << std::endl;
}

