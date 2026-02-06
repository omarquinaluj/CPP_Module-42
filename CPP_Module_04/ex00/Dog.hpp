#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string	type;

	public:
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Dog& operator=( const Dog& before );
		Dog( const Dog& before );
		Dog( void );
		~Dog();
};