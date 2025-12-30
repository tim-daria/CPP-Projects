/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-27 17:35:09 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-27 17:35:09 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):
	name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Constructor ClapTrap(const std::string) called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
	name(other.name), hitPoints(other.hitPoints),
	energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "Copy constructor ClapTrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints < 1 || hitPoints < 1) {
		std::cout << "ClapTrap " << name << " can't attack: no hit points or energy points left." << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target
		<< ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(hitPoints)) {
		hitPoints = 0;
	}
	else {
		hitPoints -= amount;
	}
	std::cout << "ClapTrap " << name << " takes " << amount
		<< " points of damage! Current health status: " << hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints < 1 || hitPoints < 1) {
		std::cout << "ClapTrap " << name << " can't be repaired: no hit points or energy points left" << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name << " repairs itself. Current health status: "
		<< hitPoints << " hit points." << std::endl;
}
