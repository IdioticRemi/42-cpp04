#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
private:
	Brain *brain;
public:
	Cat();

	Cat(const Cat &src);

	~Cat();

	Cat &operator=( Cat const &rhs );

	Animal &operator=( Animal const &rhs );

	virtual void makeSound() const;

	virtual Brain *getBrain() const;
};


#endif
