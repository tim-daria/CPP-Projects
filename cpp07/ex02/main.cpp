/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 10:28:39 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-24 10:28:39 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int main(void) {
	try {
		Array<int> a(5);
		Array<int> b;

		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a old = " << a[i] << std::endl;
			a[i] = i;
			std::cout << "a new = " << a[i] << std::endl;
		}
		//b[0] = 100;
		b = a;
		b[0] = 100;
		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a = " << a[i] << " b = " << b[i] << std::endl;;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Array<char> a(4);
		Array<char> b(a);

		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a old = " << a[i] << std::endl;
			a[i] = i + 70;
			std::cout << "a new = " << a[i] << std::endl;
		}
		b[0] = 100;
		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a = " << a[i] << " b = " << b[i] << std::endl;;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
