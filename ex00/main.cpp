/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:19:32 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/21 17:33:20 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap trap1;
    ClapTrap trap2("Clappy");
    ClapTrap trap3(trap2);
    trap1 = trap2;
    trap2.attack("Target1");
    trap2.takeDamage(5);
    trap2.beRepaired(3);
    trap3.attack("Target2");
    for (int i = 0; i < 10; ++i)
        trap2.attack("Dummy");
    trap2.beRepaired(5);

    return 0;
}