# include "Zombie.hpp"

int main(void)
{
	Zombie *z1= newZombie("Sujeto1");
	z1->announce();
	delete(z1);
	randomChump("Doctor");
	randomChump("Policia");
	return(0);
}
