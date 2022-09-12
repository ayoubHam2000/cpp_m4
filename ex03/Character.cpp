#include "Character.hpp"

Character::Character(const std::string &name): _name(name)
{
	for (int i = 0; i != 4; ++i)
		_inventory[i] = nullptr;
}

Character::Character(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i != 4; ++i)
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
}

Character &Character::operator=(const Character &rhs)
{
	AMateria	*inventory[4];

	// deep copy to temp obj to protect the self assignment
	for (int i = 0; i != 4; ++i)
		if (rhs._inventory[i])
			inventory[i] = rhs._inventory[i]->clone();
		else
			inventory[i] = nullptr;
	// delete the data
	for (int i = 0; i != 4; ++i)
		delete _inventory[i];
	this->_name = rhs._name;
	for (int i = 0; i != 4; ++i)
		_inventory[i] = inventory[i];
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i != 4; ++i)
		delete _inventory[i];
}


std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i != 4; ++i)
		if (_inventory[i] == m)
			return ;
	for (int i = 0; i != 4; ++i)
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			return ;
		}
}

void	Character::saveUnequipped(AMateria* m)
{
	static	AMateria **arr;
	static	int curr;
	static	int size;

	if (curr == size)
	{
		int 	newSize = (size ? size * 2 : 10);
		AMateria	**newArr = new AMateria*[newSize];
		for (int i = 0; i != size; i++)
			newArr[i] = arr[i];
		if (size)
			delete arr;
		arr = newArr;
		curr = size;
		size = newSize;
	}
	arr[curr] = m;
	curr++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	saveUnequipped(_inventory[idx]);
	_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr)
		return ;
	_inventory[idx]->use(target);
}
