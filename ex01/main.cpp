/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:19:32 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 11:06:11 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("Clappy");
	ScavTrap st("Scavy");
	std::cout << std::endl;

	//testing ClapTrap
	ct.attack("First Dummy");
	ct.takeDamage(5);
	ct.beRepaired(3);
	ct.printStatus();
	std::cout << std::endl;

	//testing ClapTrap
	st.attack("Second Dummy");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	st.printStatus();
	std::cout << std::endl;

	//Copy Assignment Test
	ScavTrap st2 = st;
	std::cout << std::endl;

	ScavTrap st3;
	st3 = st;
	std::cout << std::endl;

	return 0;
}