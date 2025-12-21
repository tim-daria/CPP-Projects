/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:09:14 by dtimofee          #+#    #+#             */
/*   Updated: 2025/11/29 18:17:53 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

const std::string& Contact::get_firstname() const {
	return first_name;
}
const std::string& Contact::get_lastname() const {
	return last_name;
}
const std::string& Contact::get_nickname() const {
	return nickname;
}
const std::string& Contact::get_phonenumber() const {
	return phone_number;
}
const std::string& Contact::get_darkest_secret() const {
	return darkest_secret;
}
void Contact::set_firstname(const std::string &value) {
	first_name = value;
}
void Contact::set_lastname(const std::string &value) {
	last_name = value;
}
void Contact::set_nickname(const std::string &value) {
	nickname = value;
}
void Contact::set_phonenumber(const std::string &value) {
	phone_number = value;
}
void Contact::set_darkest_secret(const std::string &value) {
	darkest_secret = value;
}
