#pragma once 
#include <iostream>
#include <cmath>


class Fixed 
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const int num) ;
        Fixed(const float num) ;
        Fixed(const Fixed &t);
        Fixed& operator=(const Fixed& t);
        bool operator>(const Fixed& t) const;
        bool operator<(const Fixed& t) const;
        bool operator>=(const Fixed& t) const;
        bool operator<=(const Fixed& t) const;
        bool operator==(const Fixed& t) const;
        bool operator!=(const Fixed& t) const;
        Fixed operator+(const Fixed& t) const;
        Fixed operator-(const Fixed& t) const;
        Fixed operator*(const Fixed& t) const;
        Fixed operator/(const Fixed& t) const;
        Fixed operator++(int) ;
        Fixed operator--(int) ;
        Fixed operator++() ;
        Fixed operator--() ;
        static Fixed& min(Fixed& num1, Fixed& num2);
        static const Fixed& min( const Fixed& num1, const Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& max( const Fixed& num1, const Fixed& num2);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;   
    private:
        int m_a;
        static const int m_b = 8;
};
std::ostream &operator<<(std::ostream &op, const Fixed &a);