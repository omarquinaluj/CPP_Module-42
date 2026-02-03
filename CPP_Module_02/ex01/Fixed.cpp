#include "Fixed.hpp"

int Fixed::toInt(void) const
{
	int tmp = n;
	tmp >>= x;
	return tmp;
}

float Fixed::toFloat(void) const
{
    //numero fijo a float
    // 'n' almacena el valor en punto fijo: valor_real * (2^x)
    // 'x' es el número de bits dedicados a la parte fraccionaria.
    //
    // Calculamos el valor real dividiendo por 2^x. Usamos (float)n
    // para forzar una división en coma flotante y no una división entera.
    //
    // Equivalente matemático: return n / 2^x;

    //ecuacion matematica
	return (float)n / (1 << x);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(): n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int otherx): n(otherx << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float otherx)
{
	std::cout << "Float constructor called" << std::endl;
	n = roundf(otherx * (1 << x));
}

Fixed::Fixed(const Fixed &copy)
{
	 std::cout << "Copy constructor called" << std::endl;
	 this->n = copy.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits ( int const raw )
{
	this->n = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return out;
}


Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->n = other.getRawBits();
	return *this;
}