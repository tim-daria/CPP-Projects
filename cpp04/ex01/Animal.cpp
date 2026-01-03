/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-30 21:27:33 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-30 21:27:33 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type): type(type) {
	std::cout << "Constructor Animal(const std::string) called" << std::endl;
}

Animal::Animal(const Animal &other): type(other.type) {
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator Animal called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "The animal makes a sound" << std::endl;
}
