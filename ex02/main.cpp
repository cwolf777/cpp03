/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:19:32 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 13:03:30 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavy");
	FragTrap frag("Fraggy");
	std::cout << std::endl;
	
	clap.attack("Target A");
	scav.attack("Target B");
	frag.attack("Target C");
	std::cout << std::endl;
	
	clap.takeDamage(3);
	scav.takeDamage(4);
	frag.takeDamage(5);
	std::cout << std::endl;
	
	clap.beRepaired(2);
	scav.beRepaired(3);
	frag.beRepaired(4);
	clap.printStatus();
	scav.printStatus();
	frag.printStatus();

	//special functions
	scav.guardGate();
	frag.highFiveGuys();
	return 0;
}