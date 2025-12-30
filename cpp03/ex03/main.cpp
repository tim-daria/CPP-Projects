/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-27 17:35:19 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-27 17:35:19 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		DiamondTrap a("Boo");
		DiamondTrap b("Hoo");
		DiamondTrap c;

		a.attack("Hoo");
		b.takeDamage(20);
		a.attack("Hoo");
		b.takeDamage(20);
		b.beRepaired(10);
		a.attack("Hoo");
		b.takeDamage(20);
		b.beRepaired(10);
		a.whoAmI();
	}
	{
		DiamondTrap a("Alpha");
		ScavTrap s1("Sierra");
		FragTrap b("Beta");

		s1.attack("Target1");
		s1.guardGate();
		a.guardGate();
		b.takeDamage(30);
		s1.beRepaired(15);
		b.takeDamage(200);
		s1.attack("Target2");
		b.highFivesGuys();
		a.highFivesGuys();
	}
}
