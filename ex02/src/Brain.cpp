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

void	Brain::setIdea(size_t index, const std::string &idea){
	if(index < arraySize)
		_ideas[index] = idea;
}

void	Brain::printIdeas(void) const{
	std::cout << "This brain thinks:\n";
	for(int i = 0; i < arraySize; i++)
	{
		if(_ideas[i] != "")
			std::cout << "\t" << _ideas[i] << '\n';
	}
	std::cout << "\t*no more thoughs*\n";
}