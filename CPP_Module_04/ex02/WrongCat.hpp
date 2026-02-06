
#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;

	public:
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		WrongCat& operator=( const WrongCat& before );
		WrongCat( const WrongCat& before );
		WrongCat( void );
		~WrongCat();
};