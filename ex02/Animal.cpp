#include "Animal.hpp"

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal: Assignement operator called" << std::endl;
	type = rhs.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "* insert animal noise *" << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}
