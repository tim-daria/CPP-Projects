/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:11:37 by dtimofee          #+#    #+#             */
/*   Updated: 2025/11/29 18:41:19 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void add_new_contact(PhoneBook &phonebook);
void search_in_phonebook(PhoneBook &phonebook);

int	main(void)
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "Welcome to the phonebook. How can I help you?" << std::endl;
	while (true)
	{
		std::cout << "Enter command(ADD, SEARCH, EXIT)" << std::endl;
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD") {
			add_new_contact(phonebook);
		}
		else if (command == "SEARCH") {
			search_in_phonebook(phonebook);
		}
		else if (command == "EXIT")
			break ;
		else
			continue;
	}
	return (0);
}
