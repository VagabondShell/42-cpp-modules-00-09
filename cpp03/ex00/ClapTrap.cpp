#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << _name << " destructor called." << std::endl;
}

ClapTrap::ClapTrap() :
    _name(""),
    _hitPoints(10),      
    _energyPoints(10),
    _attackDamage(0)  
{
    std::cout << "ClapTrap Default Constructor called. Name: '" << _name
              << "', HP: " << _hitPoints << ", EP: " << _energyPoints
              << ", AD: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(const std::string & name) : 
  _name(name), 
    _hitPoints(10),      
    _energyPoints(10),
    _attackDamage(0) 
{
   std::cout << "ClapTrap Parameterized Constructor called. Name: '" << _name
              << "', HP: " << _hitPoints << ", EP: " << _energyPoints
              << ", AD: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
    _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap Copy Constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap Copy Assignment Operator called for " << _name << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is already dead and cannot attack!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy points to attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name
              << " attacks " << target
              << ", causing " << _attackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is dead and cannot be repaired!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy points to repair!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name
              << " is repaired for " << amount
              << " points! Hit points remaining: "
              << _hitPoints << "!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints < 0) {
        _hitPoints = 0;
    }
    std::cout << "ClapTrap " << _name
              << " takes " << amount
              << " points of damage! Hit points remaining: "
              << _hitPoints << "!" << std::endl;
}
