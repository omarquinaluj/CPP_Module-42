#include "ScavTrap.hpp"
#include <iostream>

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->damage = other.damage;
	}
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
	: ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name
			  << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy == 0 || this->health == 0)
	{
		std::cout << "ScavTrap " << this->name
				  << " can't attack (no energy or no hit points)" << std::endl;
		return;
	}
	this->energy--;
	std::cout << "ScavTrap " << this->name
			  << " attacks " << target
			  << ", causing " << this->damage
			  << " points of damage!" << std::endl;
}
