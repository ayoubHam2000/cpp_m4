#ifndef Character_HPP
#define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];

	void	saveUnequipped(AMateria* m);
public:
	Character(const std::string &name);
	Character(const Character &other);
	Character &operator=(const Character &rhs);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
