#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
public:
	Animal();

	Animal(const Animal &src);

	Animal &operator=(const Animal &rhs);

	virtual ~Animal();

	virtual void makeSound() const;

	const std::string &getType() const;

protected:
	std::string type;
};


#endif
