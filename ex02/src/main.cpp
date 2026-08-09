/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:28:48 by tstelken          #+#    #+#             */
/*   Updated: 2026/08/09 19:01:04 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(){
	std::cout << "\t***Test from exercise sheet***\n";
	const Animal *j = new Dog();
	delete j;
	
	std::cout << "\n\n\t***Testing an array of Animals***\n";
	size_t size = 10;
	size_t half = size / 2;
	Animal* animals[size];
	
	for(size_t i = 0; i < half; i++)
		animals[i] = new Dog();
	for(size_t i = half; i < size; i++)
		animals[i] = new Cat();

	for(size_t i = 0; i < size; i++)
		animals[i]->makeSound();
		
	for(size_t i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n\n\t***Testing the copy constructor***\n";
	Dog *ogDog = new Dog();
	ogDog->getBrain()->setIdea(0, "I love Cats");
	ogDog->getBrain()->setIdea(1, "I love Food");
	ogDog->getBrain()->setIdea(2, "I love Me");
	ogDog->getBrain()->printIdeas();
	
	Dog *copyD = new Dog(*ogDog);
	copyD->getBrain()->printIdeas();
	
	delete copyD;
	delete ogDog;
	
	std::cout << "\n\n\t***Testing the copy assignment***\n";
	Cat *og = new Cat ();
	Cat *copy = new Cat ();
	og->getBrain()->setIdea(0, "I am an individual");
	og->getBrain()->setIdea(1, "I mind my business");
	og->getBrain()->setIdea(2, "Feed me!");

	og->getBrain()->printIdeas();
	copy->getBrain()->printIdeas();
	*copy = *og;
	copy->getBrain()->printIdeas();

	delete og;
	delete copy;

	return 0;
}