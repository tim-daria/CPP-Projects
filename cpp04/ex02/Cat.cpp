/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-31 16:49:26 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-31 16:49:26 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const std::string &type): AAnimal(type) {
	std::cout << "Constructor Cat(const std::string) called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other): AAnimal(other.type) {
	std::cout << "Copy constructor Cat called" << std::endl;
	brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &other) {
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor Cat called" << std::endl;
}

const std::string &Cat::getIdeafromBrain(int index) const {
	if (index >= 0 && index < 100) {
		return brain->getIdea(index);
	} else {
		return brain->getIdea(99);
	}
}

void Cat::setIdeatoBrain(const std::string &idea, int index) {
	if (index >= 0 && index < 100) {
		brain->setIdea(idea, index);
	}
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
