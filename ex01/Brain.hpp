#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
public:
	Brain();

	Brain(const Brain &src);

	Brain &operator=(const Brain &rhs);

	~Brain();

	std::string ideas[100];
protected:
};


#endif
