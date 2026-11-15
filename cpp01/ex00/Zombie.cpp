#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) { _name = name; }

void Zombie::announce() {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) 
{
  std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}
