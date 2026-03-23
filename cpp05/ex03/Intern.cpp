/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-23 18:08:04 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-23 18:08:04 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "forms/ShrubberyCreationForm.hpp"
#include "forms/RobotomyRequestForm.hpp"
#include "forms/PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}

Intern::~Intern() {}

const char *Intern::FormNotFoundExeption::what() const throw() {
    return "Form not found";
}

static AForm *make_shrub_creation(std::string target) {
	return new ShrubberyCreationForm(target);
}

static AForm *make_rob_request(std::string target) {
	return new RobotomyRequestForm(target);
}

static AForm *make_pardon(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	FormType forms[] = {
		{"shrubbery creation", make_shrub_creation},
		{"robotomy request", make_rob_request},
		{"presidential pardon", make_pardon},
	};
	for (int i = 0; i < 3; i++) {
		if (forms[i].name == formName) {
			std::cout << "Intern creates "<< formName << std::endl;
			return forms[i].create(formTarget);
		}
	}
	// std::cout << "Form not found" << std::endl;
	// return NULL;
	throw Intern::FormNotFoundExeption();
}
