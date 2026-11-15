#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap " << _name << " destructor called." << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    this->_name = "";
    this->_hitPoints = FragTrap::_hitPoints; 
    this->_energyPoints = ScavTrap::_energyPoints; 
    this->_attackDamage = FragTrap::_attackDamage; 
    std::cout << "DiamondTrap Default Constructor called. Name: '" << this->_name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const std::string & name) :
    ClapTrap(name + "_clap_name"),
    FragTrap(name), 
    ScavTrap(name), 
    _name(name)
{
    this->_hitPoints = FragTrap::_hitPoints; 
    this->_energyPoints = ScavTrap::_energyPoints; 
    this->_attackDamage = FragTrap::_attackDamage; 

    std::cout << "DiamondTrap Parameterized Constructor called. Name: '" << _name
              << "', HP: " << this->_hitPoints << ", EP: " << this->_energyPoints
              << ", AD: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    this->_name = other._name;
    std::cout << "DiamondTrap Copy Constructor called for " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints; 
        this->_attackDamage = other._attackDamage;
        this->_name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
        std::cout << "the name of the Damond is " << this->_name << 
          " and the name of clap trap is "<< ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}
