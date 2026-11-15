#include "FragTrap.hpp"
FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Default Constructor called. Name: '" << this->_name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
   std::cout << "FragTrap Parameterized Constructor called. Name: '" << _name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called for " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); 
        std::cout << "FragTrap Copy Assignment Operator called for " << this->_name << std::endl;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " requests a positive high-five!" << std::endl;
}
