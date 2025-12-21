/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-21 14:14:58 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-21 14:14:58 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static int is_correct_number(std::string input)
{
	if (input.empty() || input.length()!= 1) {
		std::cerr << "Invalid input. Try again" << std::endl;
		return 0;
	}
	return 1;
}

void search_in_phonebook(PhoneBook &phonebook)
{
	std::string input;
	int index;

	phonebook.display_phonebook();
	int numContacts = phonebook.get_num_contacts();
	if (numContacts < 1)
		return ;
	std::cout << "Type the index of the contact you want to display" << std::endl;
	while (true)
	{
		if (!std::getline(std::cin,input))
			return ;
		if (!is_correct_number(input)) {
			continue;
		}
		index = input[0] - '0';
		if (index >= 0 && index < numContacts) {
			phonebook.display_contact(index);
			return ;
		}
		else {
			std::cerr << "Contact with this index doesn't exist" << std::endl;
			return ;
		}
	}
}
