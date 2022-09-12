#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Construct Brain" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy Constructor Brain" << std::endl;
	for (int i = 0; i != 100; ++i)
		this->_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Assignment Brain" << std::endl;
	for (int i = 0; i != 100; ++i)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

const std::string *Brain::getIdeas() const
{
	return (_ideas);
}

void	Brain::setIdea(const std::string &idea, int nb)
{
	if (nb >= 0 && nb < 100)
		_ideas[nb] = idea;
}
