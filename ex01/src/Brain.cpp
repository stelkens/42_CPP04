#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Brain Constructor called\n";
}

Brain::Brain(const Brain &other){
	std::cout << "Brain Copy constructor called\n";
	*this = other;
}

Brain::~Brain(){
	std::cout << "Brain Destructor called\n";
}

Brain &Brain::operator=(const Brain &other){
	if (this != &other)
	{
		for (int i = 0; i < arraySize; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}
