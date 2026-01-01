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

Cat::Cat(): Animal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const std::string &type): Animal(type) {
	std::cout << "Constructor Cat(const std::string) called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other.type) {
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
