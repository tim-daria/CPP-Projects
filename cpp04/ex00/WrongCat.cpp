/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 11:59:49 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-03 11:59:49 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type): WrongAnimal(type) {
	std::cout << "Constructor WrongCat(const std::string) called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other.type) {
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
