#include "Zombie.hpp"

Zombie::Zombie() 
{

}

void Zombie::announce() {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}

void Zombie::setName(std::string const &name) 
{
  this->_name = name; 
}
