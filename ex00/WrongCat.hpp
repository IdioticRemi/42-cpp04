#ifndef CPP04_WRONGCAT_HPP
#define CPP04_WRONGCAT_HPP


#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();

	WrongCat(const WrongCat &src);

	~WrongCat();

	void makeSound() const;
};

#endif
