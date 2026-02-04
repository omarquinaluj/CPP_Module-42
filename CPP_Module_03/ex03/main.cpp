#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap	person1("Person1");
	ScavTrap	person2("Person2");
	FragTrap	person3("Person3");
	DiamondTrap	person4("Person4");

	person1.attack("someone");
	person1.beRepaired(1);

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.guardGate();

	std::cout << "\n";

	person3.attack("someone");
	person3.beRepaired(1);
	person3.highFivesGuys();

	std::cout << "\n";

	person4.attack("someone");
	person4.beRepaired(1);
	person4.whoAmI();
}