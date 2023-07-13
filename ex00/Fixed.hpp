#pragma once 
#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &t);
        Fixed& operator=(const Fixed& t);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int m_a;
        static const int m_b = 8;
};