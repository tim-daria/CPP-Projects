/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-28 12:48:14 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-28 12:48:14 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Constructor FragTrap(const std::string) called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "Copy constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
