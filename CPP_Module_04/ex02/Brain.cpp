#include "Brain.hpp"

void	Brain::setIdeas( std::string idea )
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void	Brain::printIdeas( void )
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}

Brain& Brain::operator=( const Brain& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = before.ideas[i];
	return (*this);
}

Brain::Brain( const Brain& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Had an idea";
	
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor Called" << std::endl;
}