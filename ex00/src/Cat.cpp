#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
	std::cout << "Cat Constructor called\n";
	_type = "Cat";
}

Cat::Cat(const Cat &other): Animal(other){
	std::cout << "Cat Copy constructor called\n";
	*this = other;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called\n";
}

Cat &Cat::operator=(const Cat &other){
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Miau\n";
}
