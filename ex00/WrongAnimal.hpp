#ifndef CPP04_WRONGANIMAL_HPP
#define CPP04_WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
public:
	WrongAnimal();

	WrongAnimal(const WrongAnimal &src);

	WrongAnimal &operator=(const WrongAnimal &rhs);

	~WrongAnimal();

	void makeSound() const;

	const std::string &getType() const;

protected:
	std::string type;
};


#endif
