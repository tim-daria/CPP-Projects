/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:09:12 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 12:42:30 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONRACT_HPP

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
	std::string get_firstname() const;
	std::string get_lastname() const;
	std::string get_nickname() const;
	std::string get_phonenumber() const;
	std::string get_darkest_secret() const;

	void set_firstname();
	void set_lastname();
	void set_nickname();
	void set_phonenumber();
	void set_darkest_secret();
};

#endif
