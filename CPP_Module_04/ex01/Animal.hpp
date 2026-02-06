#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void    makeSound(void) const;
        virtual std::string getType(void) const;
        Animal&operator= (const Animal& before );
        Animal (const Animal& before);
        Animal (void); 
        virtual ~Animal(); 
};

#endif