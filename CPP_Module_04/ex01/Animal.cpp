#include "Animal.hpp"

void Animal::makeSound(void) const
{
    std::cout << "Noises" << std::endl;
}

std::string Animal::getType( void) const
{
    return(this->type);
}

Animal& Animal::operator=(const Animal& before)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->type =  before.type;
    return (*this);
}

Animal::Animal( const Animal& before )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << "Default Animal Constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal Destructor" << std::endl;
}