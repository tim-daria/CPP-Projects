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
}

Dog::Dog(const std::string &type): Animal(type) {
	std::cout << "Constructor Dog(const std::string) called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other.type) {
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
