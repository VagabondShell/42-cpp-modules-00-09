#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include <string>
class Character : public ICharacter{
  public:
    Character();
    Character(const std::string& name);
    Character(const Character &other);
    ~Character();
    Character &operator=(const Character& other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
  private:
    int _counter;
    std::string _name;
    AMateria *amateria[4];
    AMateria *trach[100];
};

#endif
