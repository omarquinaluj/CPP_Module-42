#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;

	public:
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Cat& operator=( const Cat& before );
		Cat( const Cat& before );
		Cat( void );
		~Cat();
};