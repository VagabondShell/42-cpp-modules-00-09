#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] != NULL)
            delete this->amateria[i];
    }
  std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        this->amateria[i] = NULL;
    }
    std::cout << "MateriaSource Default Constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    for (int i = 0; i < 4; i++) {
        if (other.amateria[i] != NULL) {
            this->amateria[i] = other.amateria[i]->clone();
        } else {
            this->amateria[i] = NULL;
        }
    }
    std::cout << "MateriaSource Copy Constructor called for " <<  std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other)
    {
        for (int i = 0; i < 4; i++) {
            if (this->amateria[i] != NULL) {
                delete this->amateria[i];
            }
        }
        for (int i = 0; i < 4; i++) {
            if (other.amateria[i] != NULL) {
                this->amateria[i] = other.amateria[i]->clone();
            } else {
                this->amateria[i] = NULL;
            }
        }
    }
    std::cout << "MateriaSource Copy Assignment Operator called."  << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (this->amateria[i] && this->amateria[i] == m)
            return;
    }
    if (!m){
        std::cout << "Cant store a non valid AMateria" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++){
        if (!this->amateria[i]){
            this->amateria[i] = m;
            return;
        }
    }
    delete m;
}


AMateria* MateriaSource::createMateria(std::string const & type){
  for (int i = 0; i < 4; i++){
    if (this->amateria[i] && this->amateria[i]->getType() == type){
        return this->amateria[i]->clone();
    }
  }
  return 0;
}
