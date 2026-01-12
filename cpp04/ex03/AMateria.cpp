/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 23:03:29 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-03 23:03:29 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(): type("Default") {
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): type(type) {
	std::cout << "Constructor AMateria(const std::string) constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other): type(other.type) {
	std::cout << "Copy constructor AMateria called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "Copy assignment operator AMateria called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

AMateria::~AMateria() {
	std::cout << "Destructor AMateria called" << std::endl;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Default message from " << target.getName() << std::endl;
}
