#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string	type;
		Brain	*brain;

	public:
		void	setIdeas(std::string idea);
		void	printIdeas(void);
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		Cat& operator=( const Cat& before );
		Cat( const Cat& before );
		Cat( void );
		~Cat();
};