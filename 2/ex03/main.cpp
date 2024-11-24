/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:20:30 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:48:36 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

Fixed area(Point const p1, Point const p2, Point const p3) 
{
    return ((p1.getX() * (p2.getY() - p3.getY()) + 
             p2.getX() * (p3.getY() - p1.getY()) + 
             p3.getX() * (p1.getY() - p2.getY())) / 2).abs();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, b, c);
    Fixed area2 = area(a, point, c);
    Fixed area3 = area(a, b, point);
    
    if (area1 == 0 || area2 == 0 || area3 == 0)
            return (false);
    return (totalArea == area1 + area2 + area3);
}

int main() 
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    Point p(5, 5);
    Point o(-1, 2);

    if (bsp(a, b, c, p)) 
        std::cout << "Le point est à l'intérieur du triangle." << std::endl;
    else 
        std::cout << "Le point est à l'extérieur du triangle." << std::endl;

    return 0;
}
