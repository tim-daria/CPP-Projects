/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:09:12 by dtimofee          #+#    #+#             */
/*   Updated: 2025/11/29 18:57:06 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
	Contact();
	const std::string& get_firstname() const;
	const std::string& get_lastname() const;
	const std::string& get_nickname() const;
	const std::string& get_phonenumber() const;
	const std::string& get_darkest_secret() const;

	void set_firstname(const std::string &value);
	void set_lastname(const std::string &value);
	void set_nickname(const std::string &value);
	void set_phonenumber(const std::string &value);
	void set_darkest_secret(const std::string &value);
};

#endif
