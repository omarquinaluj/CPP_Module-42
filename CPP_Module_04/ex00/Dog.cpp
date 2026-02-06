#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "Guau" << std::endl;
}

std::string Dog::getType (void)const
{
    return (this->type);
}

Dog& Dog::operator=( const Dog& before )
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = before.type;
	return (*this);
}

Dog::Dog (void)
{
    std::cout << "Default cat Constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog( const Dog& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}


Dog::~Dog()
{
    std::cout << "Default Dog Destructor" << std::endl;
}