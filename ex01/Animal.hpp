#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include "Brain.hpp"

class Animal {
protected:
public:
	Animal();

	Animal(const Animal &src);

	virtual Animal &operator=(const Animal &rhs);

	virtual ~Animal();

	virtual void makeSound() const;

	const std::string &getType() const;

	virtual Brain		*getBrain( void ) const = 0;

protected:
	std::string type;
};


#endif
