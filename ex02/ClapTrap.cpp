/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:06:17 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/23 12:56:10 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default Name"), _healthPoints(100), _energyPoints(100), _attackDamage(30)
{  
	std::cout << "ClapTrap Default Constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _healthPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "ClapTrap Name Constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout << "ClapTrap copy assignment operator called" << std::endl;
		_name = other._name;
		_healthPoints = other._healthPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1)
		this->_energyPoints -= 1;
	if (this->_healthPoints && this->_energyPoints)
		std::cout << "ClapTrap " << _name << " attacks " << target << ", which loses " << this->_attackDamage << " health points!" << std::endl;
	else if (this->_healthPoints == 0)
		std::cout << "Attack failed! " << _name << " has no health points left to attack!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "Attack failed! " << _name << " has no energy points left to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points damage!" << std::endl;
	if (amount >= this->_healthPoints)
		this->_healthPoints = 0;
	else
		this->_healthPoints = this->_healthPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_healthPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no HP left!" << std::endl;
		return ;	
	}
	
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
		return ;	
	}
	
	
	if (this->_healthPoints && this->_energyPoints)
	{
		this->_healthPoints += amount;
		std::cout << "ClapTrap " << this->_name << " heals by " << amount << " health points!" << std::endl;
	}
	if (this->_energyPoints >= 1)
		this->_energyPoints -= 1;
}

void ClapTrap::printStatus() const
{
	std::cout << std::endl;
	std::cout << "=== ClapTrap Status ===" << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "HP: " << _healthPoints << std::endl;
	std::cout << "Energy: " << _energyPoints << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << std::endl;
}

