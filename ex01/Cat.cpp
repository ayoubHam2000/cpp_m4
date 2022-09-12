#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	_type = std::string("Cat");
	_brain = new Brain();
	std::cout << "Construct Cat" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	_brain = new Brain();
	*_brain = *other._brain;
	std::cout << "Copy Constructor Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	*this->_brain = *rhs._brain;
	std::cout << "Assignment Cat" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor Cat" << std::endl;
}

Brain *Cat::getBrain() const
{
	return _brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat makes sound" << std::endl;
}
