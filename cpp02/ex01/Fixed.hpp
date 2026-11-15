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
};
std::ostream & operator<<(std::ostream &o, Fixed const &rth);

#endif
