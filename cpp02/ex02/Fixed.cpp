#include "Fixed.hpp"

Fixed::Fixed() : _fixedInt(0)
{
};

Fixed::Fixed(const int n) : _fixedInt(n << _fraction) {
}

Fixed::Fixed(const float n) : _fixedInt(roundf(n * 256.0))
{
}

float Fixed::toFloat( void ) const
{
  return _fixedInt / 256.0f;
}

int Fixed::toInt( void ) const
{
  return _fixedInt >> _fraction;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &oth) : _fixedInt(oth._fixedInt) {
}

Fixed & Fixed::operator=(const Fixed &rth) {
  if (this != &rth)
    _fixedInt = rth._fixedInt;
  return *this;
}

int Fixed::getRawBits(void) const {
  return _fixedInt;
}

void Fixed::setRawBits(int const raw) { _fixedInt = raw; }

std::ostream & operator<<(std::ostream &o, Fixed const &rth)
{
  o << rth.toFloat();
  return o;
}

bool Fixed::operator>(const Fixed &rth)
{
  return(this->_fixedInt > rth._fixedInt);
}

bool Fixed::operator<(const Fixed &rth)
{
  return(this->_fixedInt < rth._fixedInt);
}

bool Fixed::operator>=(const Fixed &rth)
{
  return(this->_fixedInt >= rth._fixedInt);
}

bool Fixed::operator<=(const Fixed &rth)
{
  return(this->_fixedInt <= rth._fixedInt);
}

bool Fixed::operator==(const Fixed &rth)
{
  return(this->_fixedInt == rth._fixedInt);
}

bool Fixed::operator!=(const Fixed &rth)
{
  return (this->_fixedInt != rth._fixedInt);
}

Fixed & Fixed::operator++()
{
  _fixedInt++;
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);
  _fixedInt++;
  return tmp;
}

Fixed & Fixed::operator--()
{
  _fixedInt--;
  return *this;
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);
  _fixedInt--;
  return tmp;
}

Fixed & Fixed::min(Fixed & first, Fixed & second)
{
  if  (first < second)
    return first;
  else 
    return second;
}

const Fixed & Fixed::min(const Fixed & first, const Fixed & second)
{
  if  ( first.toFloat() < second.toFloat())
    return first;
  else 
    return second;
}

Fixed & Fixed::max(Fixed & first, Fixed & second)
{
  if  ( first > second)
    return first;
  else 
    return second;
}

const Fixed & Fixed::max(const Fixed & first, const Fixed & second)
{
  if  ( first.toFloat() > second.toFloat())
    return first;
  else 
    return second;
}

Fixed Fixed::operator+(const Fixed & rth) const
{
  return Fixed(this->toFloat() + rth.toFloat());
}

Fixed Fixed::operator-(const Fixed & rth) const
{
  return Fixed(this->toFloat() - rth.toFloat());
}

Fixed Fixed::operator*(const Fixed & rth) const
{
  return Fixed(this->toFloat() * rth.toFloat());
}

Fixed Fixed::operator/(const Fixed & rth) const
{
  return Fixed(this->toFloat() / rth.toFloat());
}
