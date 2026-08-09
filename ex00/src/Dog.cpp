#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	std::cout << "Dog Constructor called\n";
	_type = "Dog";
}

Dog::Dog(const Dog &other): Animal(other){
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called\n";
}

Dog &Dog::operator=(const Dog &other){
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void	Dog::makeSound(void) const{
	std::cout << "Wouf\n";
}