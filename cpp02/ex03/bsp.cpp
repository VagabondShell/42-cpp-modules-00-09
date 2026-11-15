/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:55:35 by sait-nac          #+#    #+#             */
/*   Updated: 2025/08/08 22:55:36 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed getSigne(const Point &vec1, const Point & vec2)
{
  return Fixed(vec1.getX() * vec2.getY() - vec1.getY() * vec2.getX());
}

Point getVectorsLenght(const Point & start, const Point & end)
{
  return Point(end.getX() - start.getX(), end.getY() - start.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
  Point AB = getVectorsLenght(a, b);
  Point BC = getVectorsLenght(b, c);
  Point CA = getVectorsLenght(c, a);

  Point AP = getVectorsLenght(a, point);
  Point BP = getVectorsLenght(b, point);
  Point CP  = getVectorsLenght(c, point);
  Fixed s1= getSigne(AB, AP);
  Fixed s2 = getSigne(BC, BP);
  Fixed s3 = getSigne(CA, CP);
  return ((s1 > 0 && s2 > 0 && s3 > 0) || ( s1 < 0 && s2 < 0 && s3 < 0));
}
