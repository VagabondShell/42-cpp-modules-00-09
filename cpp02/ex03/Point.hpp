/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:56:06 by sait-nac          #+#    #+#             */
/*   Updated: 2025/08/08 22:56:07 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
  public:
    Point();
    ~Point();
    Point(const float x, const float y);
    Point(const Point &oth);
    Point &operator=(const Point &rth);
    float getX() const ;  
    float getY() const ;
  private:
    const Fixed _x;
    const Fixed _y;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
