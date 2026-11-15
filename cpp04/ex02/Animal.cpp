#include "Animal.hpp"

Animal::~Animal()
{
  std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal() :
    type("")
{
    std::cout << "Animal Default Constructor called." << std::endl;
}


Animal::Animal(const Animal& other) :
    type(other.type)
{
    std::cout << "Animal Copy Constructor called for " <<  std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}
