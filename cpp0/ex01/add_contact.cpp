/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-21 13:56:40 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-21 13:56:40 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static int get_input(const std::string &msg, std::string &input)
{
	while (true)
	{
		std::cout << msg << std::endl;
		if (!std::getline(std::cin, input)) {
			return 0;
		}
		if (!input.empty()) {
			return 1;
		}
		std::cerr << "This field can't be empty. Try again" << std::endl;
	}
}

void add_new_contact(PhoneBook &phonebook)
{
	Contact contact;
	std::string input;

	if (!get_input("Enter contact's first name", input)) {
		return ;
	}
	contact.set_firstname(input);
	if (!get_input("Enter contact's last name", input)) {
		return ;
	}
	contact.set_lastname(input);
	if (!get_input("Enter contact's nickname", input)) {
		return ;
	}
	contact.set_nickname(input);
	if (!get_input("Enter contact's phone number", input)) {
		return ;
	}
	contact.set_phonenumber(input);
	if (!get_input("Enter contact's darkest secret", input)) {
		return ;
	}
	contact.set_darkest_secret(input);
	phonebook.save_new_contact(contact);
	std::cout << "Contact was successfully saved" << std::endl;
}
