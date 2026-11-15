#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource{
  public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource& other);
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
  private:
    AMateria *amateria[4];
};

#endif
