/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 21:02:23 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 21:02:23 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type): type(type) {};

Weapon::~Weapon() {
	std::cout << type << " has been destroyed." << std::endl;
}

const std::string& Weapon::getType(void) {
	return type;
}

void Weapon::setType(const std::string type) {
	this->type = type;
}
