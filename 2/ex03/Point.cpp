/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:20:50 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/10 17:49:05 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}


Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &o) : _x(o._x), _y(o._y) {}

Point&  Point::operator=(const Point &o)
{
    (void)o;
    return *this;
}


Fixed Point::getX() const { return _x; }
Fixed Point::getY() const { return _y; }
