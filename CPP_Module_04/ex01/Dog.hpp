#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		void		setIdeas( std::string idea );
		void		printIdeas( void );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
		Dog& operator=( const Dog& before );
		Dog( const Dog& before );
		Dog( void );
		~Dog();
};