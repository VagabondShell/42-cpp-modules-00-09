#include "Fixed.hpp"

Fixed::Fixed() : _fixedInt(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &oth) : _fixedInt(oth._fixedInt) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &rth) 
{
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
