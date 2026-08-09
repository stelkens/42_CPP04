#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(){
	std::cout << "Cat Constructor called\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other){
	std::cout << "Cat Copy constructor called\n";
	this->_brain = new Brain(*other._brain);
}

Cat::~Cat(){
	std::cout << "Cat Destructor called\n";
	delete _brain;
}

Cat &Cat::operator=(const Cat &other){
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Miau\n";
}

Brain*	Cat::getBrain(void) const{
	return _brain;
}