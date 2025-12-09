#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	// Ataque normal
	a.attack("Beta");
	b.takeDamage(3);

	// Reparar
	b.beRepaired(5);

	// Gastar toda la energía de A
	for (int i = 0; i < 10; i++)
		a.attack("Beta");

	// Intentar atacar sin energía
	a.attack("Beta");

	// Matar a B
	b.takeDamage(50);

	// Intentar acciones estando muerto
	b.attack("Alpha");
	b.beRepaired(10);

	return 0;
}
