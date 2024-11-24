/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:21:02 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:21:13 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

class Point 
{
    public :
    
        Point(void);
        Point(const float x, const float y);
        ~Point();
        Point(const Point &o);
        Point &   operator =(const Point &o);
        Fixed getX() const;
        Fixed getY() const;
        Fixed abs() const ;

    private:
        const Fixed _x;
        const Fixed _y;

};
