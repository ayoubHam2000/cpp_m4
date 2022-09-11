#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &lhs);
	~Dog();
	virtual void makeSound() const;
	Brain *getBrain() const;
};

#endif
