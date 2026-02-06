#include "Cat.hpp"

void    Cat::makeSound(void) const
{
    std::cout << "Miu" << std::endl;
}

std::string Cat::getType (void)const
{
    return (this->type);
}

Cat &Cat::operator=( const Cat& before)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->type = before.type;
    return (*this);
}

Cat::Cat( const Cat& before )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = before;
}

Cat::Cat (void)
{
    std::cout << "Default cat Constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Default Cat Destructor" << std::endl;
}