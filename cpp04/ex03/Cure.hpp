#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include "AMateria.hpp"
#include <string>

class Cure : public AMateria{
  public:
    Cure();
    Cure(const Cure &other);
    ~Cure();
    Cure &operator=(const Cure& other);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
