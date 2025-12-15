/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:11:37 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 12:44:38 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "Welcome to the phonebook. How I can help you?" << std::endl;
	while (true)
	{
		std::cout << "Enter command(ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{

		}
		else if (command == "SEARCH")
		{

		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Try again" << std::endl;

	}
	return (0);
}
