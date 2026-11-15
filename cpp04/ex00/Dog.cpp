
#include "Dog.hpp"

Dog::~Dog()
{
  std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor called." << std::endl;
}


Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy Constructor called." <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}
