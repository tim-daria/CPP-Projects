/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-25 18:44:17 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-25 18:44:17 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "forms/ShrubberyCreationForm.hpp"
#include "forms/RobotomyRequestForm.hpp"
#include "forms/PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat Sam("Sam", 147);
		Bureaucrat Paul("Paul", 1);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm rob("kitchen");

		Intern student;
		AForm *random_form;

		std::srand(std::time(0));
		std::cout << Sam << Paul;
		try {
			random_form = student.makeForm("presidential pardon", "Bender");
			Paul.signForm(*random_form);
			Paul.executeForm(*random_form);
			delete random_form;
		} catch (Intern::FormNotFoundExeption &e) {
			std::cerr << e.what() << std::endl;
		}
		Sam.incrementGrade();
		Paul.decrementGrade();
		std::cout << Sam << Paul;
		Paul.executeForm(shrub);
		Sam.signForm(shrub);
		Paul.signForm(shrub);
		Paul.signForm(rob);
		Sam.executeForm(rob);
		Paul.executeForm(rob);
		Paul = Sam;
		std::cout << Sam << Paul;
		for (int i = 0; i < 10; i++) {
			Sam.incrementGrade();
		}
		std::cout << Sam << Paul;
		Sam.executeForm(shrub);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
