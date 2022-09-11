#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "Construct WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type)
{
	std::cout << "Copy Constructor WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &lhs)
{
	std::cout << "Assignment WrongAnimal" << std::endl;
	this->_type = lhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound" << std::endl;
}

