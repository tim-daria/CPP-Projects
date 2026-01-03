/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-31 16:48:50 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-31 16:48:50 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const std::string &type): Animal(type) {
	std::cout << "Constructor Dog(const std::string) called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other.type) {
	std::cout << "Copy constructor Dog called" << std::endl;
	brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &other) {
		*brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor Dog called" << std::endl;
}

const std::string &Dog::getIdeafromBrain(int index) const {
	if (index >= 0 && index < 100) {
		return brain->getIdea(index);
	} else {
		return brain->getIdea(99);
	}
}

void Dog::setIdeatoBrain(const std::string &idea, int index) {
	if (index >= 0 && index < 100) {
		brain->setIdea(idea, index);
	}
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
