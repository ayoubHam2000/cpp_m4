#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Construct Animal" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type)
{
	std::cout << "Copy Constructor Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &lhs)
{
	std::cout << "Assignment Animal" << std::endl;
	this->_type = lhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}
