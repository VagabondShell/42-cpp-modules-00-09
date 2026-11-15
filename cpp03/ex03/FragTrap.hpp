#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
  public:
    FragTrap(const std::string &name);
    FragTrap();
    FragTrap(const FragTrap &other);
    ~FragTrap();
    void attack(const std::string& target);
    FragTrap &operator=(const FragTrap & other);
    void highFivesGuys();
};

#endif
