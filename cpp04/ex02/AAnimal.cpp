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
#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal") {
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type): type(type) {
	std::cout << "Constructor AAnimal(const std::string) called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): type(other.type) {
	std::cout << "Copy constructor AAnimal called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Copy assignment operator AAnimal called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal called" << std::endl;
}

const std::string &AAnimal::getType() const {
	return type;
}

