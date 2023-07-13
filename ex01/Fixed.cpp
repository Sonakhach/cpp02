#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->m_a = 0;
}
Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->m_a = num << this->m_b;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->m_a = (int)(roundf(num * (1 << this->m_b)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    this->m_a = raw;
}

int Fixed::getRawBits( void ) const
{
//    std::cout << "getRawBits member function called" << std::endl;
    return (this->m_a);
    
}

Fixed::Fixed(const Fixed &t)
{

  this->m_a = t.getRawBits();
   std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&t)
{
    this->m_a = t.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
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