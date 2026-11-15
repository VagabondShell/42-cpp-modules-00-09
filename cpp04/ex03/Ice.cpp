#include "Ice.hpp"

Ice::~Ice()
{
  std::cout << "Ice destructor called." << std::endl;
}

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default Constructor called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    std::cout << "Ice Copy Constructor called for " <<  std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
      AMateria::operator=(other);
    }
    return *this;
}

AMateria* Ice::clone() const
{
  return new Ice;
};

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
