/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 21:03:27 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 21:03:27 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): name(name) {};

HumanB::~HumanB() {
	std::cout << name << " has been destroyed." << std::endl;
}

void HumanB::attack(void)
{
	if (weapon) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
	else {
		std::cout << name << " attacks with their bare hands" << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
