/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-30 21:23:57 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-30 21:23:57 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	int animalsCount = 4;
	AAnimal *animals[animalsCount];

	for (int i = 0; i < animalsCount; i++) {
		if (i % 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	Dog lupa;
	Dog pupa(lupa);

	lupa.setIdeatoBrain("I'm smart", 0);
	std::cout << "lupa's first idea: " << lupa.getIdeafromBrain(0) << "\npupa's first idea: " << pupa.getIdeafromBrain(0) << std::endl;
	pupa.setIdeatoBrain("I'm happy", 0);
	std::cout << "lupa's first idea: " << lupa.getIdeafromBrain(0) << "\npupa's first idea: " << pupa.getIdeafromBrain(0) << std::endl;
	pupa = lupa;
	std::cout << "lupa's first idea: " << lupa.getIdeafromBrain(0) << "\npupa's first idea: " << pupa.getIdeafromBrain(0) << std::endl;

	lupa.setIdeatoBrain("I'm happy", 0);
	std::cout << "lupa's first idea: " << lupa.getIdeafromBrain(0) << "\npupa's first idea: " << pupa.getIdeafromBrain(0) << std::endl;

	for (int i = 0; i < animalsCount; i++) {
		delete animals[i];
	}
	return (0);
}
