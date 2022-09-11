#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>

class	Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &lhs);
	virtual ~Animal();
	const std::string &getType() const;
	virtual void makeSound() const = 0;
};

#endif
