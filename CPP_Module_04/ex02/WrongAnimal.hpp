#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		void	makeSound( void ) const;
		virtual std::string	getType( void ) const;
		WrongAnimal& operator=( const WrongAnimal& before );
		WrongAnimal( const WrongAnimal& before );
		WrongAnimal( void );
		virtual ~WrongAnimal();
};