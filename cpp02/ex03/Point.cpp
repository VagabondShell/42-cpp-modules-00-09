/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:56:03 by sait-nac          #+#    #+#             */
/*   Updated: 2025/08/08 22:56:04 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(), _y()
{

}
Point::Point(const float x, const float y) : _x(x), _y(y) {

}

Point::Point(const Point &oth) : _x(oth._x), _y(oth._y){
}

Point & Point::operator=(const Point &rth) {
  (void)rth;
  return *this;
}
Point::~Point(){

}

float Point::getX() const
{
  return this->_x.toFloat();
}

float Point::getY() const 
{
  return this->_y.toFloat();
}