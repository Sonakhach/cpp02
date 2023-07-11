#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "this is default constructor" << std::endl;
    this->m_a = 0;
}
Fixed::Fixed(const int num)
{
    std::cout << "this is parametr constructor for int" << std::endl;
    this->m_a = num << this->m_b;
}

Fixed::Fixed(const float num)
{
    std::cout << "this is parametr constructor for float" << std::endl;
    this->m_a = (int)(roundf(num * (1 << this->m_b)));
}

Fixed::~Fixed()
{
    std::cout << "this is destructor" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    this->m_a = raw;
}

int Fixed::getRawBits( void ) const
{
   std::cout << "getRawBits member function called" << std::endl;
    return (this->m_a);
    
}

Fixed::Fixed(const Fixed &t)
{

  this->m_a = t.getRawBits();
   std::cout << "this is Copy constructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&t)
{
    this->m_a = t.getRawBits();
    std::cout << "this is copy  assignment operator" << std::endl;
    return (*this);
}

int Fixed::toInt( void ) const
{
    return ((int)(this->m_a >> this->m_b));

}
float Fixed::toFloat( void ) const
{
    return ((float)this->m_a / (1 << this->m_b));
}

std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}