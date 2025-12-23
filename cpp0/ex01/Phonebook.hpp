/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:03:04 by dtimofee          #+#    #+#             */
/*   Updated: 2025/11/29 18:19:26 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	int num_contacts;
	int index;

	public:
	PhoneBook();
	int get_num_contacts() const;
	void save_new_contact(Contact &contact);
	void display_phonebook();
	void display_contact(int index);
};

#endif
