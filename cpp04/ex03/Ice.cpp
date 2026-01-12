/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-04 16:30:21 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-04 16:30:21 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other) {
	std::cout << "Copy constructor Ice called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Copy assignment operator Ice called" << std::endl;
	(void) other;
	return *this;
}

Ice::~Ice() {
	std::cout << "Destructor Ice called" << std::endl;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
