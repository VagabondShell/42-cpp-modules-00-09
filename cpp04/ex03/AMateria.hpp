
#ifndef AMateria_HPP
#define AMateria_HPP
#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
  public:
    AMateria();
    AMateria(const AMateria &other);
    virtual ~AMateria();
    AMateria &operator=(const AMateria& other);
    AMateria(std::string const & type);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
  protected:
    std::string type;
};

#endif
