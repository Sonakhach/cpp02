#pragma once 
#include <iostream>
#include <cmath>


class Fixed 
{
    public:
        Fixed();
        Fixed(const int num) ;
        Fixed(const float num) ;
        Fixed(const Fixed &t);
        Fixed& operator=(const Fixed& t);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;   
    private:
        int m_a;
        static const int m_b = 8;
};
std::ostream &operator<<(std::ostream &op, const Fixed &a);