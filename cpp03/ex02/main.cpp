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

int main(void)
{
	{
		ScavTrap a("Boo");
		ScavTrap b("Hoo");

		a.attack("Hoo");
		b.takeDamage(20);
		a.attack("Hoo");
		b.takeDamage(20);
		b.beRepaired(10);
		a.attack("Hoo");
		b.takeDamage(20);
		b.beRepaired(10);
	}
	{
		ClapTrap a("Alpha");
		ScavTrap s1("Sierra");
		FragTrap b("Beta");

		s1.attack("Target1");
		s1.guardGate();
		b.takeDamage(30);
		s1.beRepaired(15);
		b.takeDamage(200);
		s1.attack("Target2");
		b.highFivesGuys();
	}
}
