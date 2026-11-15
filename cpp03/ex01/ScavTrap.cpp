#include "ScavTrap.hpp"
ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Default Constructor called. Name: '" << this->_name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
   std::cout << "ScavTrap Parameterized Constructor called. Name: '" << _name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor called for " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); // Correctly calls the base class assignment operator
        std::cout << "ScavTrap Copy Assignment Operator called for " << this->_name << std::endl;
    }
    return *this;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)  
{
    if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " is already dead and cannot attack!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name << " has no energy points to attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name
              << " attacks " << target
              << ", causing " << _attackDamage
              << " points of damage!" << std::endl;
}
