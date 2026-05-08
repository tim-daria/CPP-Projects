/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:44:17 by dtimofee          #+#    #+#             */
/*   Updated: 2026/05/08 15:32:47 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat Sam("Sam", 100);
		Bureaucrat Paul("Paul", 1);
		Bureaucrat Martin(Paul);

		Form Anmeldung("Anmeldung", 50, 50);
		Form Registration("Registration form", 90, 50);

		std::cout << Sam << Paul << Martin;
		Sam.incrementGrade();
		Paul.decrementGrade();
		Sam.signForm(Registration);
		std::cout << Sam << Paul << Martin;
		Paul = Sam;
		std::cout << Sam << Paul << Martin;
		Paul.signForm(Anmeldung);
		Martin.signForm(Anmeldung);
		Martin.signForm(Anmeldung);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
