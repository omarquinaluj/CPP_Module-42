#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap : virtual public ClapTrap
{
	private:
		/* data */
	public:
		void	highFivesGuys( void );
		FragTrap( std::string name );
		FragTrap& operator=(const FragTrap& before);
		FragTrap(const FragTrap& before);
		FragTrap( void );
		~FragTrap();
};

#endif