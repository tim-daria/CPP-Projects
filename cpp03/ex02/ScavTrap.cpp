/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-28 10:45:39 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-28 10:45:39 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Constructor ScavTrap(const std::string) called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy assignment operator ScavTrap called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints < 1 || hitPoints < 1) {
		std::cout << "ScavTrap " << name << " can't attack: no hit points or energy points left." << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target
		<< ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
