/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:28:48 by tstelken          #+#    #+#             */
/*   Updated: 2026/08/09 16:55:59 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(){
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

	return 0;
}