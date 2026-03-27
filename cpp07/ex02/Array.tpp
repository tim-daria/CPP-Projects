/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 16:41:51 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-25 16:41:51 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0), _elements(nullptr) {};

template <typename T>
Array<T>::Array(unsigned int n): _size(n), _elements(new T[n]()) {};

template <typename T>
Array<T>::Array(const Array<T> &other) {
	_size = other._size;
	_elements = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_elements[i] = other._elements[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_elements[i] = other._elements[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] _elements;
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= _size) {
		throw Array<T>::OutOfRangeException();
	}
	return _elements[i];
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw() {
	return "The index is out of bounds";
}
