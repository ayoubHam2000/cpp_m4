#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
private:
	AMateria	*known[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
