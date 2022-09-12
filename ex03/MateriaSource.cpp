#include "MateriaSource.hpp"

#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i != 4; ++i)
		known[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i != 4; ++i)
		this->known[i] = other.known[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i != 4; ++i)
		this->known[i] = rhs.known[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i != 4; ++i)
		delete this->known[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i != 4; ++i)
	{
		if (!known[i])
		{
			known[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i != 4; ++i)
	{
		if (known[i] && known[i]->getType() == type)
		{
			return known[i]->clone();
		}
	}
	return (nullptr);
}
