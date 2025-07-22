/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:06:17 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/22 10:28:23 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default Name"), _healthPoints(100), _energyPoints(50), _attackDamage(20)
{  
	std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _healthPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_healthPoints = other._healthPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1)
		this->_energyPoints -= 1;
	if (this->_healthPoints && this->_energyPoints)
		std::cout << "ClapTrap: " << target << " loses " << this->_attackDamage << " health points!" << std::endl;
	else if (this->_healthPoints <= 0)
		std::cout << "No health points left!" << std::endl;
	else if (this->_energyPoints)
		std::cout << "No energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points damage!" << std::endl;
	this->_healthPoints = this->_healthPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= 1)
		this->_energyPoints -= 1;
	if (this->_healthPoints && this->_energyPoints)
	{
		this->_healthPoints += amount;
		std::cout << "ClapTrap " << this->_name << " heals by " << amount << " health points!" << std::endl;
	}
}

