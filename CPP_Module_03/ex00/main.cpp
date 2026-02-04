#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	a.attack("someone");
	a.takeDamage(5);
	a.takeDamage(7);
	a.beRepaired(3);
	a.attack("someone");

	std::cout << "\n";

	b.attack("someone");
	b.beRepaired(1);
	b.attack("someone");
	b.beRepaired(1);
	b.attack("someone");
	b.beRepaired(1);
	b.attack("someone");
	b.beRepaired(1);
	b.attack("someone");
	b.beRepaired(2);
	b.attack("otherone");
	b.beRepaired(3);

	return 0;
}
