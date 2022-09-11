#include "WrongCat.hpp"

WrongCat::WrongCat(): _type("WrongCat")
{
	std::cout << "Construct WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): _type(other._type)
{
	std::cout << "Copy Constructor WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &lhs)
{
	std::cout << "Assignment WrongCat" << std::endl;
	this->_type = lhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes sound" << std::endl;
}

