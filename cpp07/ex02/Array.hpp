/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 16:19:04 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-25 16:19:04 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <class T>
class Array
{
	private:
	unsigned int _size;
	T *_elements;

	public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &other);
	~Array();

	unsigned int size() const;
	T &operator[](unsigned int i);

	class OutOfRangeException: public std::exception {
		public:
		const char *what() const throw();
	};
};

#include "Array.tpp"
