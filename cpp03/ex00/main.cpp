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
#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap a("Boo");
		ClapTrap b("Hoo");

		a.attack("Hoo");
		b.takeDamage(3);
		a.attack("Hoo");
		b.takeDamage(5);
		b.beRepaired(1);
		a.attack("Hoo");
		b.takeDamage(4);
	}
	{
		ClapTrap a("Tank");

		a.takeDamage(100);
		a.attack("anyone");
		a.beRepaired(1);
	}
}
