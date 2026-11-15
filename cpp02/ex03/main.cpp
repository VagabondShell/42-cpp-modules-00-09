/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:55:44 by sait-nac          #+#    #+#             */
/*   Updated: 2025/08/08 22:59:30 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iomanip>
#include "Point.hpp"

int main() {
    Point a(-5.0f, 0.0f);
    Point b(0.0f, 5.0f);
    Point c(5.0f, 0.0f);

    Point p1(1.0f, 1.0f);
    std::cout << std::setw(46) << std::left << "Point inside" << " -> ";
    if (bsp(a, b, c, p1))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    Point p2(5.0f, 5.0f);
    std::cout << std::setw(46) << std::left << "Point outside" << " -> ";
    if (bsp(a, b, c, p2))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    Point p3(0.0f, 2.5f);
    std::cout << std::setw(46) << std::left << "Point in center of the triangle" << " -> ";
    if (bsp(a, b, c, p3))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    Point p4(a);
    std::cout << std::setw(46) << std::left << "Point on vertex a" << " -> ";
    if (bsp(a, b, c, p4))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    Point p5(4.688f, 0.1f);
    std::cout << std::setw(46) << std::left << "Point barely inside" << " -> ";
    if (bsp(a, b, c, p5))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    Point p6(2.5f, 2.5f); 
    std::cout << std::setw(46) << std::left << "Point on edge bc" << " -> ";
    if (bsp(a, b, c, p6))
        std::cout << "Inside ✅" << std::endl;
    else
        std::cout << "Outside ❌" << std::endl;

    return 0;
}
