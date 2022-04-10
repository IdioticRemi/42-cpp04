#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();

	Cat(const Cat &src);

	~Cat();

	virtual void makeSound() const;
};


#endif
