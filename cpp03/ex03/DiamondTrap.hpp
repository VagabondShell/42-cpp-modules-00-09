#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
  public:
    DiamondTrap(const std::string &name);
    DiamondTrap();
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap & other);
   void attack(const std::string& target);
    void whoAmI();
  private:
    std::string _name;
};

#endif
