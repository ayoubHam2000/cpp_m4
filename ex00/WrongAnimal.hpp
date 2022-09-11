#ifndef WrongAnimal_hpp
#define WrongAnimal_hpp

#include <iostream>

class	WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &lhs);
	~WrongAnimal();
	const std::string &getType() const;
	void makeSound() const;
};

#endif
