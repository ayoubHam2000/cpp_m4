#ifndef WrongCat_hpp
#define WrongCat_hpp

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
protected:
	std::string _type;
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &rhs);
	~WrongCat();
	void makeSound() const;
};

#endif
