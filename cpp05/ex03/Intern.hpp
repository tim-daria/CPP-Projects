/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-23 14:41:56 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-23 14:41:56 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "forms/AForm.hpp"

struct FormType {
	std::string name;
	AForm *(*create)(const std::string &);
};

class Intern
{
	public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

	AForm *makeForm(const std::string &formName, const std::string &formTarget);

	class FormNotFoundExeption: public std::exception {
		public:
		const char *what() const throw();
	};
};
