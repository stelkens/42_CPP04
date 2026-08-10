/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:28:48 by tstelken          #+#    #+#             */
/*   Updated: 2026/08/10 17:01:40 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* copy;
	const Dog dog;
	
	meta->makeSound();

	std::cout << j->getType() << "\n";
	j->makeSound();
	
	std::cout << i->getType() << "\n";
	i->makeSound();
	
	copy = meta;
	copy->makeSound();
	
	copy = j;
	std::cout << copy->getType() << "\n";
	copy->makeSound();
	
	copy = i;
	std::cout << copy->getType() << "\n";
	copy->makeSound();
	
	std::cout << dog.getType() << "\n";
	dog.makeSound();
	
	delete j;
	delete i;
	delete meta;
	std::cout << "\n\n";
	
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	wrong->makeSound();
	std::cout << wrongCat->getType() << "\n";
	wrongCat->makeSound();
	WrongCat wCat;
	wCat.makeSound();
	
	delete wrong;
	delete wrongCat;
	return 0;
}