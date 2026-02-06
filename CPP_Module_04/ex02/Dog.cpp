#include "Dog.hpp"

void	Dog::setIdeas( std::string idea )
{
	this->brain->setIdeas(idea);
}

void	Dog::printIdeas( void )
{
	this->brain->printIdeas();
}

void	Dog::makeSound( void) const
{
	std::cout << "Guau" << std::endl;
}

std::string	Dog::getType( void ) const
{
	return (this->type);
}

Dog& Dog::operator=( const Dog& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	this->brain = new Brain(*before.brain);
	return (*this);
}

Dog::Dog( const Dog& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default Dog Destructor" << std::endl;
}