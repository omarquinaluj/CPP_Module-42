#include "ClapTrap.hpp"
#include <iostream>

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->damage = other.damage;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
	: name(copy.name), health(copy.health),
	  energy(copy.energy), damage(copy.damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), health(10), energy(10), damage(0)
{
	std::cout << "Constructor called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy == 0 || this->health == 0)
	{
		std::cout << "ClapTrap " << this->name
				  << " can't attack (no energy or no hit points)" << std::endl;
		return;
	}
	this->energy--;
	std::cout << "ClapTrap " << this->name << " attacks "
			  << target << ", causing "
			  << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy == 0 || this->health == 0)
	{
		std::cout << "ClapTrap " << this->name
				  << " can't repair (no energy or no hit points)" << std::endl;
		return;
	}
	this->energy--;
	this->health += amount;
	std::cout << "ClapTrap " << this->name
			  << " repairs itself, gaining "
			  << amount << " hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health == 0)
	{
		std::cout << "ClapTrap " << this->name
				  << " can't take more damage (already destroyed)" << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(this->health))
		this->health = 0;
	else
		this->health -= amount;

	std::cout << "ClapTrap " << this->name
			  << " takes " << amount
			  << " points of damage!" << std::endl;
}
