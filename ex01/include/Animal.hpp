/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:14:31 by tstelken          #+#    #+#             */
/*   Updated: 2026/08/09 19:07:32 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include<string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		Animal &operator=(const Animal& other);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
