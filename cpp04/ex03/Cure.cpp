#include "Cure.hpp"

Cure::~Cure()
{
  std::cout << "Cure destructor called." << std::endl;
}

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default Constructor called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure Copy Constructor called for " <<  std::endl;
}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
      AMateria::operator=(other);
    }
    return *this;
}

AMateria* Cure::clone() const
{
  return new Cure;
};

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
