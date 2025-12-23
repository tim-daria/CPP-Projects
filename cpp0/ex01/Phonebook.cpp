/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:03:32 by dtimofee          #+#    #+#             */
/*   Updated: 2025/11/29 18:18:36 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Phonebook.hpp"

PhoneBook::PhoneBook() : num_contacts(0), index(0) {};

int PhoneBook::get_num_contacts() const {
	return num_contacts;
}

void PhoneBook::save_new_contact(Contact &contact)
{
	if (index == 8)
		index = 0;
	contacts[index] = contact;
	index++;
	if (num_contacts < 8)
		num_contacts++;
}

void PhoneBook::display_phonebook()
{
	int i = 0;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	while (i < num_contacts)
	{
		Contact contact = contacts[i];
		std::string firstName = contact.get_firstname();
		if (firstName.length() > 10) {
			firstName = firstName.substr(0, 9) + ".";
		}
		std::string lastName = contact.get_lastname();
		if (lastName.length() > 10) {
			lastName = lastName.substr(0, 9) + ".";
		}
		std::string nickName = contact.get_nickname();
		if (nickName.length() > 10) {
			nickName = nickName.substr(0, 9) + ".";
		}
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << firstName << "|";
		std::cout << std::setw(10) << std::right << lastName << "|";
		std::cout << std::setw(10) << std::right << nickName << std::endl;
		i++;
	}
}

void PhoneBook::display_contact(int index) {
	contacts[index].display();
}
