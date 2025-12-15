/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 21:02:34 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 21:02:34 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
	std::string type;

	public:
	//Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string& getType(void);
	void setType(const std::string type);
};

#endif
