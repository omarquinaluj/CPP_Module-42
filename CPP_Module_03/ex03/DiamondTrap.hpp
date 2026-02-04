#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	void	whoAmI();
	DiamondTrap& operator=( const DiamondTrap& before );
	DiamondTrap( const DiamondTrap& before );
	DiamondTrap(std::string name);
	DiamondTrap( void );
	~DiamondTrap();
};

#endif
