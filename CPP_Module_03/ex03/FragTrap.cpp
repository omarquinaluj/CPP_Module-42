#include "FragTrap.hpp"
#include <iostream>

FragTrap& FragTrap:: operator=(const FragTrap& before)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->hitPoints = before.hitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->name = before.name;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& before)
    : ClapTrap(before)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}


FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	std::cout << "FragTrap " << this->name << " Constructor" << std::endl;
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " displayed a positive high fives request" << std::endl;
}
