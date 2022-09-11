#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.hpp"

class	Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &lhs);
	~Cat();
	virtual void makeSound() const;
};

#endif
