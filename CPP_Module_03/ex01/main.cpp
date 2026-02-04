#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>
int main()
{
	ClapTrap	person1("Person1");
	ScavTrap	person2("Person2");

	person1.attack("someone");
	person1.beRepaired(1);
	person1.attack("someone");
	person1.beRepaired(1);

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.guardGate();
}