/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:14:27 by tstelken          #+#    #+#             */
/*   Updated: 2026/08/09 18:57:26 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal"){
	std::cout << "Animal Constructor called\n";
}

Animal::Animal(const Animal &other){
	std::cout << "Animal Copy constructor called\n";
	*this = other;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called\n";
}

Animal &Animal::operator=(const Animal &other){
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}


void	Animal::makeSound(void) const{
	std::cout << "Animal sound\n";
}

std::string		Animal::getType(void) const{
	return _type;
}


