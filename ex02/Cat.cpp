#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &src) : Animal() {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = src;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
	delete brain;
}

Brain *Cat::getBrain() const {
	return brain;
}

Cat		&Cat::operator=( Cat const &rhs )
{
	std::cout << "Cat: Assignement operator called" << std::endl;
	type = rhs.getType();
	*brain = *rhs.getBrain();
	return *this;
}
Animal	&Cat::operator=( Animal const &rhs )
{
	std::cout << "Cat: Animal Assignement operator called" << std::endl;
	type = rhs.getType();
	*brain = *rhs.getBrain();
	return *this;
}