/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:50:04 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 12:56:27 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = name;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap copy assignment operator called" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1)
		this->_energyPoints -= 1;
	if (this->_healthPoints && this->_energyPoints)
		std::cout << "ScavTrap " << _name << " attacks " << target << ", which loses " << this->_attackDamage << " health points!" << std::endl;
	else if (this->_healthPoints == 0)
		std::cout << "ScavTrap: Attack failed! " << _name << " has no health points left to attack!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap: Attack failed! " << _name << " has no energy points left to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}