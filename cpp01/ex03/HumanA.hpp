/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-12 21:03:23 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-12 21:03:23 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
	std::string name;
	Weapon& weapon;

	public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void attack(void);
};
