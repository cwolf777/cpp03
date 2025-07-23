/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:19:32 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/22 13:43:54 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap ct("Clappy");

	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap st("Scavy");

	std::cout << "\n=== Testing ClapTrap ===" << std::endl;
	ct.attack("First Dummy");
	ct.takeDamage(5);
	ct.beRepaired(3);

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	st.attack("Second Dummy");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();

	std::cout << "\n=== Copy & Assignment Test ===" << std::endl;
	ScavTrap st2 = st; // copy constructor
	ScavTrap st3;
	st3 = st; // assignment operator

	std::cout << "\n=== Destructors Called Automatically ===" << std::endl;

	return 0;
}