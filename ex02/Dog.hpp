#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
	Dog();

	Dog(const Dog &src);

	~Dog();

	Dog &operator=( Dog const &rhs );

	Animal &operator=( Animal const &rhs );

	virtual void makeSound() const;

	virtual Brain *getBrain() const;
};


#endif
