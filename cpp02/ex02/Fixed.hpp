#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
private:
  int _fixedInt;
  static const int _fraction = 8;

public:
  Fixed();
  Fixed(const int n);
  Fixed(const float n);
  float toFloat( void ) const;
  int toInt( void ) const;
  Fixed(const Fixed &oth);
  Fixed &operator=(const Fixed &rth);
  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
  bool operator>(const Fixed &rth);
  bool operator<(const Fixed &rth);
  bool operator>=(const Fixed &rth);
  bool operator<=(const Fixed &rth);
  bool operator==(const Fixed &rth);
  bool operator!=(const Fixed &rth);
  Fixed operator+(const Fixed & rth) const; 
  Fixed operator-(const Fixed & rth) const;
  Fixed operator*(const Fixed & rth) const;
  Fixed operator/(const Fixed & rth) const;
  Fixed &operator++();
  Fixed operator++(int);
  Fixed &operator--();
  Fixed operator--(int);
  static Fixed & min(Fixed & first, Fixed & second);
  static const Fixed & min(const Fixed & first, const Fixed & second);
  static Fixed & max(Fixed & first, Fixed & second);
  static const Fixed & max(const Fixed & first, const Fixed & second);

};
std::ostream & operator<<(std::ostream &o, Fixed const &rth);

#endif
