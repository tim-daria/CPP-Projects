/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 14:16:02 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 14:16:02 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	std::string zombieName;
	int N;

	std::cout << "The zombie apocalypse has begun! Prepare yourself, survivor... Create your own horde" << std::endl;
	std::cout << "Enter the name of your zombie:" << std::endl;
	std::cin >> zombieName;
	std::cout << "Enter the number of zombies in your horde:" << std::endl;
	std::cin >> N;
	Zombie* horde = zombieHorde(N, zombieName);
	if (!horde)
	{
		std::cout << "Invalid number of zombies." << std::endl;
		return (0);
	}
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete []horde;
}
