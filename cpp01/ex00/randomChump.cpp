/* **************************************************************************
 */
/*                                                                            */
/*                                                        :::      :::::::: */
/*   randomChump.cpp                                    :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+ */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+ */
/*   Created: 2025-12-12 14:15:51 by dtimofee          #+#    #+# */
/*   Updated: 2025-12-12 14:15:51 by dtimofee         ###   ########.fr */
/*                                                                            */
/* **************************************************************************
 */

#include <iostream>

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie z(name);
  z.announce();
}
