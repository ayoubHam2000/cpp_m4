#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &rhs);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
