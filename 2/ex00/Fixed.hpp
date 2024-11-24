/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:12:24 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:12:27 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
    public :
        Fixed ();
        Fixed (const Fixed &a);
        ~Fixed ();
        Fixed & operator = (const Fixed &a);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);  

    private :
        int     _value;
        static const int _fractional_bits;
};