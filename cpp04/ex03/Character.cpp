#include "Character.hpp"

Character::~Character()
{
    std::cout << "Character destructor called." << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] != NULL)
            delete this->amateria[i];
    }
    for (int i = 0; i < 100; i++) {
        if (this->trach[i] != NULL)
            delete this->trach[i];
    }
}

Character::Character()  : _counter(0)
{
    for (int i = 0; i < 4; i++) {
        this->amateria[i] = NULL;
    }
    for (int i = 0; i < 100; i++) {
            this->trach[i] = NULL;
    }
    std::cout << "Character Default Constructor called." << std::endl;
}

Character::Character(const std::string& name)  : _counter(0), _name(name)
{
    for (int i = 0; i < 4; i++) {
        this->amateria[i] = NULL;
    }
   for (int i = 0; i < 100; i++) {
        this->trach[i] = NULL;
    }

    std::cout << "Character Parameterized Constructor called." << std::endl;
}

Character::Character(const Character& other) :  _counter(other._counter), _name(other._name) {
    for (int i = 0; i < 4; i++) {
        if (other.amateria[i] != NULL) {
            this->amateria[i] = other.amateria[i]->clone();
        } else {
            this->amateria[i] = NULL;
        }
    }
    for (int i = 0; i < 100; i++) {
            if (other.trach[i] != NULL) {
                this->trach[i] = other.trach[i]->clone();
            } else {
                this->trach[i] = NULL;
            }
        }
    std::cout << "Character Copy Constructor called for " <<  std::endl;
}

Character& Character::operator=(const Character& other) {
    if (this != &other)
    {
        for (int i = 0; i < 4; i++) {
            if (this->amateria[i] != NULL) {
                delete this->amateria[i];
            }
        }
        for (int i = 0; i < 100; i++) {
            if (this->trach[i] != NULL)
                delete this->trach[i];
        }

        for (int i = 0; i < 4; i++) {
            if (other.amateria[i] != NULL) {
                this->amateria[i] = other.amateria[i]->clone();
            } else {
                this->amateria[i] = NULL;
            }
        }
        for (int i = 0; i < 100; i++) {
            if (other.trach[i] != NULL) {
                this->trach[i] = other.trach[i]->clone();
            } else {
                this->trach[i] = NULL;
            }
        }
    }
    std::cout << "Character Copy Assignment Operator called."  << std::endl;
    return *this;
}

std::string const & Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
    if (!m){
        std::cout << "Cant store a non valid AMateria" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] && this->amateria[i] == m) {
            std::cout << "Materia is already equipped." << std::endl;
            return;
        }
    }
    for (int i = 0; i < 4; i++){
        if (!this->amateria[i]){
            this->amateria[i] = m;
            return;
        }
  }
 delete m;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3 || amateria[idx] == NULL)
        return;
    if (_counter > 99){
        delete trach[_counter % 100];
        trach[_counter % 100] = NULL;
    }
    trach[_counter % 100] = amateria[idx];
    _counter++;
    amateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3 || amateria[idx] == NULL)
        return;
    this->amateria[idx]->use(target);
}
