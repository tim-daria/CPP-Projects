/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 21:03:13 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 21:03:13 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon* weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon& weapon);
};
