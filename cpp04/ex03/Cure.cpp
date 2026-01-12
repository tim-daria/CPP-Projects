/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-04 16:07:55 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-04 16:07:55 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	std::cout << "Copy constructor Cure called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Copy assignment operator Cure called" << std::endl;
	(void) other;
	return *this;
}

Cure::~Cure() {
	std::cout << "Destructor Cure called" << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
