#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &lhs);
	~Cat();
	virtual void makeSound() const;
	Brain *getBrain() const;
};

#endif
