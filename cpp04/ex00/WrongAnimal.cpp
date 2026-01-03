/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 11:50:06 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-03 11:50:06 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): type(type) {
	std::cout << "Constructor WrongAnimal(const std::string) called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "The WrongAnimal makes a sound" << std::endl;
}
