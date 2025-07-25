/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:19:32 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 10:31:34 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	// Create two ClapTraps
	ClapTrap bob("Bob");
	ClapTrap alice("Alice");
	ClapTrap noname;

	// Print initial status
	bob.printStatus();
	alice.printStatus();
	noname.printStatus();

	// attacks 
	bob.attack("Dummy");
	alice.attack("Dummy");

	std::cout << std::endl;

	bob.printStatus();
	alice.printStatus();

	std::cout << std::endl;	
	//take damage
	bob.takeDamage(5);
	alice.takeDamage(11);
	
	std::cout << std::endl;
	//repairs themself
	bob.beRepaired(3);
	alice.beRepaired(3);
	bob.printStatus();
	alice.printStatus();

	std::cout << std::endl;

	// Alice tries to attack with 0 HP
	alice.attack("Dummy");
	bob.attack("Dummy");

	// Bob tries to repair with no energy
	for (int i = 0; i < 11; ++i)
		bob.beRepaired(1);
	bob.printStatus();
	alice = bob;
	alice.printStatus();
	return 0;
}