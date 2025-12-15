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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	std::string zombieName;

	std::cout << "Creating a zombie on the heap" << std::endl;
	std::cin >> zombieName;
	Zombie* heapZombie = newZombie(zombieName);
	heapZombie->announce();
	delete heapZombie;

	std::cout << "Creating a zombie on the stack" << std::endl;
	std::cin >> zombieName;
	randomChump(zombieName);
}
