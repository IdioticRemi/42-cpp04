#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &src) : Animal() {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = src;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
	delete brain;
}

Brain *Dog::getBrain() const {
	return brain;
}

Dog		&Dog::operator=( Dog const &rhs )
{
	std::cout << "Dog: Assignement operator called" << std::endl;
	type = rhs.getType();
	*brain = *rhs.getBrain();
	return *this;
}
Animal	&Dog::operator=( Animal const &rhs )
{
	std::cout << "Dog: Animal Assignement operator called" << std::endl;
	type = rhs.getType();
	*brain = *rhs.getBrain();
	return *this;
}
