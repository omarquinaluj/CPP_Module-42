#ifndef Fixed_HPP
# define Fixed_HPP


class Fixed
{
	private:
		int n;
		static const int x = 8;
	public:
		Fixed(); // Constructor
		Fixed(const Fixed &copy); // connstructor copia
		Fixed& operator=(const Fixed &other); // operacion de copia
		~Fixed(); //destructor

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

#endif