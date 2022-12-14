#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.hpp"

class	Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	~Dog();
	virtual void makeSound() const;
};

#endif
