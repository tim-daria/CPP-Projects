/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 14:46:54 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-25 14:46:54 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template <typename T, typename Func>
void iter(T *array, const int size, Func function) {
	for (int i = 0; i < size; i++) {
		function(array[i]);
	}
}
