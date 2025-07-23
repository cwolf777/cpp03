/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:14 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 13:03:55 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called for " << name << std::endl;
	_name = name;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "FragTrap copy assignment operator called" << std::endl;
	}
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " gets his well earned high fives!" << std::endl;
}