#pragma once
#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		void	setIdeas( std::string idea );
		void	printIdeas( void );
		Brain& operator=( const Brain& before );
		Brain( const Brain& before );
		Brain( void );
		~Brain();
};