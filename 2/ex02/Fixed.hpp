/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:18:00 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:18:04 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed 
{
    public :

        Fixed   ();
        Fixed   (const int a);
        Fixed   (const float a);
        Fixed   (const Fixed &other);
        ~Fixed  ();
        
        Fixed&  operator = (const Fixed &a);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        bool    operator == (const Fixed &other) const;
        bool    operator != (const Fixed &other) const;
        bool    operator < (const Fixed &other) const;
        bool    operator > (const Fixed &other) const;
        bool    operator <= (const Fixed &other) const;
        bool    operator >= (const Fixed &other) const;
        
        Fixed   operator + (const Fixed &other) const;
        Fixed   operator - (const Fixed &other) const;
        Fixed   operator * (const Fixed &other) const;
        Fixed   operator / (const Fixed &other) const;

        Fixed&  operator++();
        Fixed&  operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);

        const       Fixed& max(Fixed &fixed_a, Fixed &fixed_b);
        static const Fixed& max(Fixed const &fixed_a, Fixed const &fixed_b);
        const       Fixed& min(Fixed &fixed_a, Fixed &fixed_b);
        static const Fixed& min(Fixed const &fixed_a, Fixed const &fixed_b);

        float   toFloat(void ) const;
        int     toInt(void) const;  

    private :

        int     _value;
        int     _nb;
        static const int _fixed_point_number = 8;
        static const int espilon = 1;
};

std::ostream &operator << (std::ostream &out, const Fixed &value);