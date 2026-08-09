#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal():_type("WrongAnimal"){
	std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal sound\n";
}

std::string		WrongAnimal::getType(void) const{
	return _type;
}