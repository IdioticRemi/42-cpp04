#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default WrongAnimal") {
	std::cout << "WrongAnimal: Constructed called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "* insert animal noise *" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}
