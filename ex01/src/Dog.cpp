#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(){
	std::cout << "Dog Constructor called\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other){
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called\n";
	delete _brain;
}

Dog &Dog::operator=(const Dog &other){
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	Dog::makeSound(void) const{
	std::cout << "Wouf\n";
}