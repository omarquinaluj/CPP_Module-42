#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>


class ScavTrap : public ClapTrap
{
	private:
		/*data*/
	public:
		void	guardGate();
		void	attack(const std::string& target);
		ScavTrap& operator=(const ScavTrap& before);
		ScavTrap(const ScavTrap& before);
		ScavTrap( std::string name );
		ScavTrap( void );
		~ScavTrap();
};

#endif