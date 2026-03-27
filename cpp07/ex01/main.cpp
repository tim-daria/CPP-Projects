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
#include "iter.hpp"

template <typename T>
void increment(T &element) {
	element += 1;
}

template <typename T>
void print(const T &element) {
	std::cout << element << " ";
}

int main( void ) {
	int int_array[] = {1, 2, 3, 4, 5};

	::iter(int_array, 5, ::print<int>);
	std::cout << std::endl;
	::iter(int_array, 5, ::increment<int>);
	::iter(int_array, 5, ::print<int>);
	std::cout << std::endl;

	const char const_ch_array[] = "Hello";

	::iter(const_ch_array, 5, ::print<const char>);
	std::cout << std::endl;

	char char_array[] = "Good luck!";
	::iter(char_array, 10, ::print<char>);
	std::cout << std::endl;
	::iter(char_array, 10, ::increment<char>);
	::iter(char_array, 10, ::print<char>);
	std::cout << std::endl;

	return 0;
}
