/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:15:31 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:15:33 by zachamou         ###   ########.fr       */
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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed & operator = (const Fixed &a);
        float   toFloat(void ) const;
        int     toInt(void) const;  

    private :

        int     _value;
        static const int _fixed_point_number = 8;
};

std::ostream &operator << (std::ostream &out, const Fixed &value);