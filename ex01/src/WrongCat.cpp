#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	std::cout << "WrongCat Constructor called\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other){
	std::cout << "WrongCat Copy constructor called\n";
	*this = other;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

void	WrongCat::makeSound(void) const{
	std::cout << "wrongMiau\n";
}
