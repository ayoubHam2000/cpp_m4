#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>

class	Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &rhs);
	~Brain();
	const std::string *getIdeas() const;
	void setIdea(const std::string &idea, int nb);
};

#endif
