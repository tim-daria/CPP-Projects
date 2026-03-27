/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 10:28:49 by dtimofee          #+#    #+#             */
/*   Updated: 2026-03-24 10:28:49 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min(T x, T y)
{
	if (y <= x) {
		return y;
	}
	return x;
}

template <typename T>
T max(T x, T y)
{
	if (y >= x) {
		return y;
	}
	return x;
}
