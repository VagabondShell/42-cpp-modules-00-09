#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
  public:
  FragTrap(const std::string &name);
  FragTrap();
  FragTrap(const FragTrap &other);
  ~FragTrap();
  FragTrap &operator=(const FragTrap & other);
  void highFivesGuys();
};

#endif
