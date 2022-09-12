#include "AMateria.hpp"

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	test1()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(10);
	me->unequip(-1);

	delete bob;
	delete me;
	delete src;
}

void	test2()
{
	ICharacter* bob = new Character("bob");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character	a = Character("c1");

	a.equip(src->createMateria("ice"));
	a.equip(src->createMateria("cure"));

	Character	b = Character(a); //construct and deep copy a to b;
	a.unequip(0);
	a.unequip(1);
	a.use(0, *bob); //not found therefor it will not print
	b.use(0, *bob); //found becaus therese deep copy, so it will print

	delete src;
	delete bob;
}

int main()
{
	test1();
	test2();

	//system("leaks Animal");
	return 0;
}
