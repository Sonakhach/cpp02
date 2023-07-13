#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "this is default constructor" << std::endl;
    this->m_a = 0;
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

   std::cout << "this is Copy constructor" << std::endl;
  this->m_a = t.getRawBits();
}

Fixed& Fixed::operator=(const Fixed&t)
{
    std::cout << "this is copy  assignment operator" << std::endl;
    this->m_a = t.getRawBits();
    return (*this);
}