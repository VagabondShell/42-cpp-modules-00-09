#include "Fixed.hpp"
Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int n) : _fixedInt(n << _fraction) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedInt(roundf(n * 256.0))
{
  std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
  return _fixedInt / 256.0f;
}

int Fixed::toInt( void ) const
{
  return _fixedInt >> _fraction;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &oth) : _fixedInt(oth._fixedInt) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &rth) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &rth)
    _fixedInt = rth._fixedInt;
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return _fixedInt;
}

void Fixed::setRawBits(int const raw) { _fixedInt = raw; }

std::ostream & operator<<(std::ostream &o, Fixed const &rth)
{
  o << rth.toFloat();
  return o;
}

