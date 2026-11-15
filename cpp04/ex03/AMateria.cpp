
#include "AMateria.hpp"

AMateria::~AMateria()
{
  std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria() :
    type("")
{
    std::cout << "AMateria Default Constructor called." << std::endl;
}


AMateria::AMateria(const AMateria& other) :
type(other.type)
{
    std::cout << "AMateria Copy Constructor called for " <<  std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

AMateria::AMateria(std::string const& type) {
    this->type = type;
}

std::string const & AMateria::getType() const
{
  return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

